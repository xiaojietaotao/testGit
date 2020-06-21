#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog_3dlaser_para_set.h"
#include"dialog_ultrasonic_radar_para_set.h"
#include"dialog_mili_wave_para_set.h"
#include"dialog_contol.h"
#include"ecu_more.h"//无人推土机CAN通讯数据
#include"workset.h"//施工作业通讯设置
#include"canmore_tuitu.h"//有人推土机CAN通讯数据
#include"canmore_pingdi.h"//平地机CAN通讯数据
#include"canmore_yalu.h"//压路机CAN通讯数据
#include"scraper_more.h"//无人推土机施工作业数据
#include"workdata_pingdi.h"//平地机施工作业数据
#include"workdata_tuitu.h"//推土机施工作业数据
#include"workdata_yalu.h"//压力机施工作业数据
#include <QStringListModel>
#include <QStandardItemModel>
#include <QModelIndex>
#include "MyQLabel.h"
#include"common.h"
namespace Ui {
class MainWindow;
class canSet;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pbt_3Dlaser_clicked();

    void on_pbt_ultrasonic_radar_clicked();

    void on_pbt_mili_wave_radar_clicked();
    void time_update();
    void on_pbt_path_control_clicked();

    void on_btn_canmore_clicked();

    void on_pbt_scraper_more_clicked();

    void on_radioButton_clicked();

    void on_sel_car(const QString &text);//选择机械类型

    void on_sel_baud_rate(const QString &text);//选择波特率

    void on_pbt_initial_ack_clicked();

    void on_pbt_back_tuitu_none_clicked();

    void on_pbt_back_pingdi_clicked();

    void on_pbt_back_tuitu_clicked();

    void on_pbt_back_yalu_clicked();

    void on_btn_canmore_tuitu_clicked();

    void on_btn_canmore_pingdi_clicked();

    void on_btn_canmore_yalu_clicked();
    void on_btn_workmore_clicked();

    void on_btn_workdata_tuitu_clicked();

    void on_btn_workdata_pingdi_clicked();

    void on_btn_workdata_yalu_clicked();



protected:
    void timerEvent(QTimerEvent *event);
private:
    Ui::MainWindow *ui;
    Dialog_3Dlaser_para_set *dialog;//3D激光参数设置
    dialog_ultrasonic_radar_para_set *dialogUltrasonic;//超声波雷达参数设置
    dialog_mili_wave_para_set *dialogMiliWave;//毫米波雷达参数设置
    dialog_contol *dialogControl;//路径控制参数设置
    ecu_more *ecuMore;//无人CAN通讯数据
    workset * work_set;//施工作业通讯设置
    scraper_more *scraperMore;//无人施工作业数据
    canmore_tuitu *can_more_tuitu;//有人推土机CAN通讯数据
    canmore_pingdi *can_more_pingdi;//平地机CAN通讯数据
    canmore_yalu *can_more_yalu;//压路机CAN通讯数据
    workdata_pingdi *work_data_pingdi;//平地机施工作业数据
    workdata_yalu *work_data_yalu;//压路机施工作业数据
    workdata_tuitu *work_data_tuitu;//推土机施工作业数据
    QTimer *update_time;
    QStringListModel *Model;
    QStandardItemModel *ItemModel;
};

#endif // MAINWINDOW_H
