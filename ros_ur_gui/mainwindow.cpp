#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QDialog>
#include<QTimer>
#include<QDateTime>
#include"common.h"
#include<QDir>
#include <QDebug>
#include <QCoreApplication>
//ssss
extern "C"
{
    #include "setup.h"
}

int car_kind_cpy = 1;//机械类型选择辅助变量，判断是否选择发生改变
int baud_rate_cpy = 250;//波特率选择辅助变量，判断是否选择发生改变


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //获取程序当前运行目录
    QString qstr = QDir::currentPath();
    std::string str = qstr.toStdString();
    int index = str.find_last_of('/');
    str.erase(index,str.size() - index);
    str += "/ros_ur_gui/";
    path = QString::fromStdString(str);

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);//窗口大小自适应
    //    setMinimumSize(800, 600);//设置最小最大分辨率
    //    setMaximumSize(800, 600);
    this->startTimer(0);
    ui->setupUi(this);
    //默认无人推土机
    ui->show_txt1->setText("直线前进后退、u型弯，圆这三种演示路径");
    ui->radioButton->setChecked(1);//默认显示障碍物扇形
    //获取程序当前运行目录
//    qDebug()<<"当前路径"<<QDir::currentPath();
    update_time = new QTimer();
    connect(update_time,SIGNAL(timeout()),this,SLOT(time_update()));
    update_time->start(1000); //1秒钟后启动
    //初始化界面上显示logo,图片------------------------
//    QString car_pic_path=  QFile(directoryOf("ros_ur_gui").absoluteFilePath("data/img/car.png")).fileName();//path+"data/img/car.png";//
    QString car_pic_path_tuitu=  QFile(directoryOf("ros_ur_gui").absoluteFilePath("data/img/tuitu.jpg")).fileName();//path+"data/img/tuitu.jpg";//
    QString car_pic_path_pingdi=  QFile(directoryOf("ros_ur_gui").absoluteFilePath("data/img/pingdi.jpg")).fileName();//path+"data/img/pingdi.jpg";//
    QString car_pic_path_yalu=  QFile(directoryOf("ros_ur_gui").absoluteFilePath("data/img/yalu.jpg")).fileName();//path + "data/img/yalu.jpg";//
    QString car_pic_path_wajue= QFile(directoryOf("ros_ur_gui").absoluteFilePath("data/img/wajue.jpg")).fileName();//path +  "data/img/wajue.jpg";//
    QString car_pic_path_putan=  QFile(directoryOf("ros_ur_gui").absoluteFilePath("data/img/putan.jpg")).fileName();//path + "data/img/putan.jpg";//

    QString logo_pic_shantui=  QFile(directoryOf("ros_ur_gui").absoluteFilePath("data/img/shantui.jpg")).fileName();//path +  "data/img/shantui.jpg";//
    QString logo_pic_hust= QFile(directoryOf("ros_ur_gui").absoluteFilePath("data/img/hust.jpg")).fileName();//path + "data/img/hust.jpg";//
    QString logo_pic_weichai=  QFile(directoryOf("ros_ur_gui").absoluteFilePath("data/img/weichai.jpg")).fileName();//path + "data/img/weichai.jpg";//
//    QImage img_car(car_pic_path);//显示无人推土机图片
    QImage img_car_tuitu(car_pic_path_tuitu);//有人推土机
    QImage img_car_pingdi(car_pic_path_pingdi);//平地机
    QImage img_car_yalu(car_pic_path_yalu);//压路
    QImage img_car_wajue(car_pic_path_wajue);//挖掘机
    QImage img_car_putan(car_pic_path_putan);//铺摊机
    QImage img_logo_shantui(logo_pic_shantui);//山推
    QImage img_logo_hust(logo_pic_hust);//hust
    QImage img_logo_weichai(logo_pic_weichai);//潍柴
    QMatrix matrix;
    matrix.rotate(-90);
    //    QSize picSize(200,150);
    ui->lb_car_tuitu->setScaledContents(true);//图片等比例缩放
    ui->lb_car_tuitu->setPixmap(QPixmap::fromImage(img_car_tuitu).scaled(ui->lb_car_tuitu->size(), Qt::KeepAspectRatio));
    ui->lb_car_pingdi->setScaledContents(true);
    ui->lb_car_pingdi->setPixmap(QPixmap::fromImage(img_car_pingdi).scaled(ui->lb_car_pingdi->size(), Qt::KeepAspectRatio));
    ui->lb_car_yalu->setScaledContents(true);
    ui->lb_car_yalu->setPixmap(QPixmap::fromImage(img_car_yalu).scaled(ui->lb_car_yalu->size(), Qt::KeepAspectRatio));
    ui->lb_car_wajue->setScaledContents(true);
    ui->lb_car_wajue->setPixmap(QPixmap::fromImage(img_car_wajue).scaled(ui->lb_car_wajue->size(), Qt::KeepAspectRatio));
    ui->lb_car_putan->setScaledContents(true);
    ui->lb_car_putan->setPixmap(QPixmap::fromImage(img_car_putan).scaled(ui->lb_car_putan->size(), Qt::KeepAspectRatio));
    ui->lb_logo_weichai->setScaledContents(true);
    ui->lb_logo_weichai->setPixmap(QPixmap::fromImage(img_logo_weichai).scaled(ui->lb_logo_weichai->size(), Qt::KeepAspectRatio));
    ui->lb_logo_shantui->setScaledContents(true);
    ui->lb_logo_shantui->setPixmap(QPixmap::fromImage(img_logo_shantui).scaled(ui->lb_logo_shantui->size(), Qt::KeepAspectRatio));
    ui->lb_logo_hust->setScaledContents(true);
    ui->lb_logo_hust->setPixmap(QPixmap::fromImage(img_logo_hust).scaled(ui->lb_logo_hust->size(), Qt::KeepAspectRatio));//*****************
    //ui->lineEdit_179->setText(QString::number(mbd_msg_engine_working_time.engine_working_time, 10, 2));
    //初始化显示
    ui->stackedWidget->setCurrentIndex(4);//设备参数初始化界面
    QString str_car_num ="01/0001";//车辆/工地
    ui->le_car_num->setStyleSheet("background:transparent;border-width:0;border-style:outset");//透明无边框
    ui->le_car_num->setText(str_car_num);
    ui->le_system_time->setStyleSheet("background:transparent;border-width:0;border-style:outset");//透明无边框
    ui->lb_line->setStyleSheet("background:transparent;border-width:0;border-style:outset");//透明无边框
    QPoint GlobalPoint(ui->lb_line->mapToGlobal(QPoint(0, 0)));//获取控件在窗体中的坐标
    label_x = GlobalPoint.x();
    label_y = GlobalPoint.y();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::time_update()
{
    //显示系统时间
    QDateTime time=QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss");
    ui->le_system_time->setText(str);
    ui->le_system_time_tuitu->setText(str);
    ui->le_system_time_pingdi->setText(str);
    ui->le_system_time_yalu->setText(str);

    //CAN参数显示

    //无人推土机
    //walkState
    ui->umbd_brakeState->setText(QString::number(umbd_msg_walkState.brakeState));
    ui->umbd_bladeLockState->setText(QString::number(umbd_msg_walkState.bladeLockState));
    ui->umbd_walkLockState->setText(QString::number(umbd_msg_walkState.walkLockState));
//    ui->umbd_forwardState->setText(QString::number(umbd_msg_walkState.forwardState));
//    ui->umbd_backwardState->setText(QString::number(umbd_msg_walkState.backwardState));

    ui->umbd_engineRpm->setText(QString::number(umbd_msg_walkState.engineRpm));
    ui->umbd_forwardGear->setText(QString::number(umbd_msg_walkState.forwardGear, 'f',2));
    ui->umbd_backGear->setText(QString::number(umbd_msg_walkState.backGear, 'f',2));

    //sysState
    ui->umbd_oilPressureState->setText(QString::number(umbd_msg_sysState.oilPressureState));
//    ui->umbd_engineTpState->setText(QString::number(umbd_msg_sysState.engineTpState));
    ui->umbd_systemVoltageState->setText(QString::number(umbd_msg_sysState.systemVoltageState));
    ui->umbd_workHours->setText(QString::number(umbd_msg_sysState.workHours, 'f',2));
    ui->umbd_engineWaterTp->setText(QString::number(umbd_msg_sysState.engineWaterTp));
    ui->umbd_oilTp->setText(QString::number(umbd_msg_sysState.oilTp));
    ui->umbd_oilLevel->setText(QString::number(umbd_msg_sysState.oilLevel));

    //sysSpeed
//    ui->umbd_leftMotorRpm->setText(QString::number(umbd_msg_sysSpeed.leftMotorRpm));
//    ui->umbd_rightMotorRpm->setText(QString::number(umbd_msg_sysSpeed.rightMotorRpm));
    ui->umbd_leftMotorSpeed->setText(QString::number(umbd_msg_sysSpeed.leftMotorSpeed, 'f', 2));
    ui->umbd_rightMotorSpeed->setText(QString::number(umbd_msg_sysSpeed.rightMotorSpeed, 'f', 2));
    ui->umbd_vehicleErrorCode->setText(QString::number(umbd_msg_sysSpeed.vehicleErrorCode));

    //有人推土机
    ui->mbd_engine_intake_manifold_tem->setText(QString::number(mbd_msg_engine_intake_manifold_tem.engine_intake_manifold_tem));
    ui->mbd_engine_working_time->setText(QString::number(mbd_msg_engine_working_time.engine_working_time, 'f', 2));
    ui->mbd_engine_speed->setText(QString::number(mbd_msg_engine_speed.engine_speed, 'f', 2));
    ui->mbd_engine_failure_code->setText(QString::number(mbd_msg_engine_failure_code.engine_failure_code));
    ui->mbd_system_voltage->setText(QString::number(mbd_msg_system_voltage.system_voltage, 'f', 2));
    ui->mbd_engine_oil_pressure->setText(QString::number(mbd_msg_engine_oil_pressure.engine_oil_pressure));
    ui->mbd_engine_coolant_temperature->setText(QString::number(mbd_msg_engine_coolant_temperature.engine_coolant_temperature));
    ui->mbd_fuel_consumption->setText(QString::number(mbd_msg_fuel_consumption.fuel_consumption, 'f', 2));

    //有人平地机
    ui->mgd_engine_intake_manifold_tem->setText(QString::number(mgd_msg_engine_intake_manifold_tem.engine_intake_manifold_tem));
    ui->mgd_engine_working_time->setText(QString::number(mgd_msg_engine_working_time.engine_working_time, 'f', 2));
    ui->mgd_engine_speed->setText(QString::number(mgd_msg_engine_speed.engine_speed, 'f', 2));
    ui->mgd_engine_failure_code->setText(QString::number(mgd_msg_engine_failure_code.engine_failure_code));
    ui->mgd_system_voltage->setText(QString::number(mgd_msg_system_voltage.system_voltage, 'f', 2));
    ui->mgd_engine_oil_pressure->setText(QString::number(mgd_msg_engine_oil_pressure.engine_oil_pressure));
    ui->mgd_engine_coolant_temperature->setText(QString::number(mgd_msg_engine_coolant_temperature.engine_coolant_temperature));
    ui->mgd_fuel_consumption->setText(QString::number(mgd_msg_fuel_consumption.fuel_consumption, 'f', 2));

    //有人压路机
    ui->mrl_engine_intake_manifold_tem->setText(QString::number(mrl_msg_engine_intake_manifold_tem.engine_intake_manifold_tem));
    ui->mrl_engine_working_time->setText(QString::number(mrl_msg_engine_working_time.engine_working_time, 'f', 2));
    ui->mrl_engine_speed->setText(QString::number(mrl_msg_engine_speed.engine_speed, 'f', 2));
    ui->mrl_engine_failure_code->setText(QString::number(mrl_msg_engine_failure_code.engine_failure_code));
    ui->mrl_system_voltage->setText(QString::number(mrl_msg_system_voltage.system_voltage, 'f', 2));
    ui->mrl_engine_oil_pressure->setText(QString::number(mrl_msg_engine_oil_pressure.engine_oil_pressure));
    ui->mrl_engine_coolant_temperature->setText(QString::number(mrl_msg_engine_coolant_temperature.engine_coolant_temperature));
    ui->mrl_fuel_consumption->setText(QString::number(mrl_msg_fuel_consumption.fuel_consumption, 'f', 2));

    //显示障碍物检测
    ui->le_left_ultra_radar->setText(QString::number(radius,10,2));
    ui->le_right_ultra_radar->setText(QString::number(radius,10,2));

    ui->le_back_left_mili_wave_radar->setText(QString::number(radius_mili,10,2));
    ui->le_left_mili_wave_radar->setText(QString::number(radius_mili,10,2));
    ui->le_right_mili_wave_radar->setText(QString::number(radius_mili,10,2));

    QString angle_sign=u8"°";

    ItemModel = new QStandardItemModel(this);
    QStringList strList;
    strList.append(("A: 8.5m, 30")+angle_sign);
    strList.append(("B: 8.5m, 30")+angle_sign);
    strList.append(("C: 8.5m, 30")+angle_sign);
    strList.append(("D: 8.5m, 30")+angle_sign);
    strList.append(("E: 8.5m, 30")+angle_sign);
    strList.append(("F: 8.5m, 30")+angle_sign);
    strList.append(("G: 8.5m, 30")+angle_sign);
    strList.append(("H: 8.5m, 30")+angle_sign);
    strList.append(("I: 8.5m, 30")+angle_sign);
    strList.append(("J: 8.5m, 30")+angle_sign);
    strList.append(("K: 8.5m, 30")+angle_sign);
    int nCount = strList.size();
    for(int i = 0; i < nCount; i++)
    {
        QString string = static_cast<QString>(strList.at(i));
        QStandardItem *item = new QStandardItem(string);
        ItemModel->appendRow(item);
    }
    ui->lv_laser_item->setModel(ItemModel);
}
void MainWindow::on_pbt_3Dlaser_clicked()
{
    //新建一个窗口对象，其中this指定了新的窗口的副对象是MainWindow,在销毁MainWindow时也会销毁子对象，即该窗口对象
    dialog =new Dialog_3Dlaser_para_set(this);
    dialog->setModal(true);//设置成模态
    dialog->show();
}

void MainWindow::on_pbt_ultrasonic_radar_clicked()
{
    dialogUltrasonic =new dialog_ultrasonic_radar_para_set(this);
    dialogUltrasonic->setModal(true);//设置成模态
    dialogUltrasonic->show();
}

void MainWindow::on_pbt_mili_wave_radar_clicked()
{
    dialogMiliWave =new dialog_mili_wave_para_set(this);
    dialogMiliWave->setModal(true);//设置成模态
    dialogMiliWave->show();
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    Q_UNUSED(event)
    this->update();
}
//
void MainWindow::on_pbt_path_control_clicked()//作业轨迹跟踪与控制参数设置
{
    dialogControl =new dialog_contol(this);
    dialogControl->setModal(true);//设置成模态
    dialogControl->show();
}

void MainWindow::on_pbt_scraper_more_clicked()//施工作业通讯设置
{
    work_set=new workset(this);
    work_set->setModal(true);
    work_set->show();
}

void MainWindow::on_radioButton_clicked()
{
    flag_show_obstacle=!flag_show_obstacle;
}

void MainWindow::on_select_baud_rate_currentIndexChanged(const QString &arg1)
{
    baud_rate = arg1.toInt();
}

void MainWindow::on_select_car_currentIndexChanged(int index)//下拉框选择机械类型
{
    carKind = index;
    if(carKind == 0)//"无人推土机")
    {
        ui->show_txt1->setText("直线前进后退、u型弯，圆这三种演示路径");
    }
    else if(carKind == 1)//"有人推土机")
    {
        ui->show_txt_tuitu->setText("日期：2020年6月1日\n"
                                    "施工设计高程：30cm；\n"
                                    "填方量估算：0.28万方；\n"
                                    "起始桩号：K0+000～K0+100（作业范围：25m×100m）；\n"
                                    "平整高程：30cm；\n"
                                    "推15纵，前进方向平行于施工段道路纵向，前进速度2-3km/h.");
    }
    else if(carKind == 2)//"有人平地机")
    {
        ui->show_txt_pingdi->setText("日期：2020年6月1日\n"
                                     "拟完成土层高度：30cm；\n"
                                     "起始桩号：\n"
                                     "K0+000～K0+100（作业范围：25m×100m）；\n"
                                     "铲刀平整高程：30cm；\n"
                                     "\n"
                                     "平地机直线前进方向与推土机保持一致，完成平整作业；\n"
                                     "刮土板以较小的入土深度和最大切削宽度状态工作.");
    }
    else if(carKind == 3)//"有人压路机")
    {
        ui->show_txt_yalu->setText("日期：2020年6月1日\n"
                                   "拟完成土层高度：根据土壤情况，压实即可，压实度90%；\n"
                                   "起始桩号：K0+000～K0+100（作业范围：25m×100m）；\n"
                                   "碾压工艺：低速静压1遍（速度1.2Km/h）；中速振压3遍（速度2.1Km/h-2.6Km/h）；中速静压1遍（速度2.5Km/h-3.5Km/h）；\n"
                                   "错轮宽度：对振动压路机不小于压实轮的1/3.");
    }
}

void MainWindow::on_pbt_initial_ack_clicked()//初始化界面确认按钮
{
    ui->tabWidget->setCurrentIndex(0);//显示施工轨迹界面
    ui->tabWidget_tuitu->setCurrentIndex(0);//显示施工轨迹界面
    ui->tabWidget_yalu->setCurrentIndex(0);//显示施工轨迹界面
    ui->tabWidget_pingdi->setCurrentIndex(0);//显示施工轨迹界面

    if(carKind == 0)//无人 推土
    {
        ui->stackedWidget->setCurrentIndex(0);
    }
    else if(carKind == 1)//有人推土
    {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else if(carKind == 2)//有人平地机
    {
        ui->stackedWidget->setCurrentIndex(2);
    }
    else if(carKind == 3)//有人压路机
    {
        ui->stackedWidget->setCurrentIndex(3);
    }

    //判断参数配置选择是否发生改变
    if(car_kind_cpy != carKind || baud_rate_cpy != baud_rate){
        selpara_change_flag = true;//参数配置发生改变
        car_kind_cpy = carKind;
        baud_rate_cpy = baud_rate;
        selpara_change_flag = false;//恢复状态
    }

}

void MainWindow::on_pbt_back_tuitu_none_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);//初始化界面
}

void MainWindow::on_pbt_back_pingdi_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);//初始化界面
}

void MainWindow::on_pbt_back_tuitu_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);//初始化界面
}

void MainWindow::on_pbt_back_yalu_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);//初始化界面
}

void MainWindow::on_btn_canmore_clicked()
{
    ecuMore =new ecu_more(this);
    ecuMore->setModal(true);//设置成模态
    ecuMore->show();
}

void MainWindow::on_btn_workmore_clicked()//无人推土机施工作业数据
{
    scraperMore =new scraper_more(this);
    scraperMore->setModal(true);//设置成模态
    scraperMore->show();
}

void MainWindow::on_btn_canmore_tuitu_clicked()//有人推土机CAN通讯数据
{
    can_more_tuitu=new canmore_tuitu(this);
    can_more_tuitu->setModal(true);
    can_more_tuitu->show();
}

void MainWindow::on_btn_canmore_pingdi_clicked()//平地机CAN通讯数据
{
    can_more_pingdi=new canmore_pingdi(this);
    can_more_pingdi->setModal(true);
    can_more_pingdi->show();
}

void MainWindow::on_btn_canmore_yalu_clicked()//压路机CAN通讯数据
{
    can_more_yalu=new canmore_yalu(this);
    can_more_yalu->setModal(true);
    can_more_yalu->show();
}

void MainWindow::on_btn_workdata_tuitu_clicked()//有人推土机施工作业数据
{
    work_data_tuitu =new workdata_tuitu(this);
    work_data_tuitu->setModal(true);
    work_data_tuitu->show();
}

void MainWindow::on_btn_workdata_pingdi_clicked()//平地机施工作业数据
{
    work_data_pingdi=new workdata_pingdi(this);
    work_data_pingdi->setModal(true);
    work_data_pingdi->show();
}

void MainWindow::on_btn_workdata_yalu_clicked()//压路机施工作业数据
{
    work_data_yalu=new workdata_yalu(this);
    work_data_yalu->setModal(true);
    work_data_yalu->show();
}


void MainWindow::on_pushButton_clicked()
{
    machine_if_close();
}
