#include "MyQLabel.h"
#include <QPainter>
#include"common.h"
#include <QPointF>
#include <QPen>
#include <qmath.h>
#include<QDebug>
#include <fstream>//文件读写
int center_x=label_x+350;
int center_y=label_y+50;

MyQLabel::MyQLabel(QWidget *parent, Qt::WindowFlags f): QLabel(parent, f)
{
//    qDebug()<<center_x<<"  "<<center_y;
    x = -10;
    m_count = 0;
    m_Timer = new QTimer(this);
    m_Timer->start(10);
    //connect(m_Timer,SIGNAL(timeout()),this,SLOT(creatData()));

    QFile file(path + "/data/Rounte_line_P.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
    }
    int x = 0,y = 0;
    while(!file.atEnd())
    {
        QByteArray line = file.readLine();
        QString str(line);
        str=str.left(str.size()-1);
        QStringList strList = str.split(",");
        if(xList.count()==0)
        {
            x=strList[0].toFloat();
            y=strList[1].toFloat();
        }
        xList.append(strList[0].toFloat()-x);
        yList.append(strList[1].toFloat()-y);
        direction_flagList.append(strList[2].toInt());
    }
//    qDebug()<<xList;
}

MyQLabel::MyQLabel(const QString &text, QWidget *parent, Qt::WindowFlags f)
    : QLabel(text, parent, f)
{
    // here, nothing to see is
}
void MyQLabel::creatData()
{
    x += 0.2;
    m_count += 1;
    if(m_count%2)
    {
        xList.append(x);
        yList.append(qSin(x));
    }
    else
    {
        xList.append(x);
        yList.append(qSin(x));
        update();
    }
    if(m_count == 100)
    {
        xList.clear();
        yList.clear();
        m_count = 0;
        x = -10;
    }
}
void MyQLabel::drawline(QPaintEvent *e)
{
    QLabel::paintEvent(e);
    QPainter painter(this);
    QPen pen;
    pen.setColor(Qt::green);
    pen.setStyle(Qt::SolidLine);
    pen.setWidthF(0.05);
    painter.setPen(pen);
    //painter.setViewport(50, 50, width()-100, height()-100);
    //painter.setWindow(-10, 2, 20, -4); // (-10, 2)    (10, -2)
    //painter.fillRect(-10, 2, 20, -4, Qt::white);
    painter.drawLine(QPointF(-10, 0), QPointF(10, 0));   // x
    painter.drawLine(QPointF(0, 2), QPointF(0, -2));     // y
    for(int i = 0; i < yList.count(); i++)
    {
        if(i == 0)
            painter.drawPoint(QPointF(xList[i], yList[i]));
        else
            painter.drawLine(QPointF(xList[i-1], yList[i-1]), QPointF(xList[i], yList[i]));
    }
}
void MyQLabel::paintEvent(QPaintEvent *e)
{
    QLabel::paintEvent(e);
    //轨迹
    QPainter painter_path(this);
    QPen pen;  // creates a default pen
    pen.setStyle(Qt::DashDotLine);
    pen.setWidth(6);
    pen.setBrush(Qt::blue);
    pen.setStyle(Qt::SolidLine);
    pen.setCapStyle(Qt::RoundCap);
    pen.setJoinStyle(Qt::RoundJoin);
    for(int i=0;i<xList.count();++i)
    {
        if(direction_flagList[i]==1)
        {
            pen.setColor(qRgb(255, 0, 0));
            pen.setWidth(1);
            painter_path.setPen(pen);
            QRectF rectangle1(center_x+xList[i]*6-340,380-(center_y+yList[i]*3), 5, 5);
            painter_path.drawEllipse(rectangle1);
        }
        else
        {
            pen.setColor(qRgb(0, 0, 255));
            pen.setWidth(4);
            painter_path.setPen(pen);
            painter_path.drawPoint(QPointF(center_x+xList[i]*6-340+3,383-(center_y+yList[i]*3)));
        }

        if(i>0)
        {
            pen.setWidth(1);
            pen.setColor(qRgb(77, 77, 77));
            painter_path.setPen(pen);
            painter_path.drawLine(QPointF(center_x+xList[i-1]*6-340+3,380-(center_y+yList[i-1]*3)),QPointF(center_x+xList[i]*6-340+3,380-(center_y+yList[i]*3)));
        }
    }



    ///下面是显示推土机周围的传感器检测距离效果
    if(0){
    QLabel::paintEvent(e);    
    //轨迹
    QPainter painter_path(this);
    QPen pen;  // creates a default pen
    pen.setStyle(Qt::DashDotLine);
    pen.setWidth(3);
    pen.setBrush(Qt::blue);
    pen.setCapStyle(Qt::RoundCap);
    pen.setJoinStyle(Qt::RoundJoin);
    painter_path.setPen(pen);
    QPointF point_start(center_x-75, center_y+220);
    QPointF point_end(center_x-140, center_y+320);
    painter_path.drawLine(point_start, point_end);

    radius+=5;
    if (radius>25)
        radius=0;
    // 超声波左
    QPainter painter_ultra_left(this);
    painter_ultra_left.setRenderHint(QPainter::Antialiasing, true);//设置渲染,启动反锯齿
    painter_ultra_left.translate(center_x-100, center_y+210); // 超声波左，修改圆心坐标的地方
    if(flag_show_obstacle)
    {
        gradientArc(&painter_ultra_left, radius, 230,  90 ,qRgb(85, 255, 127));
    }



    // 超声波中
    QPainter painter_ultra_center(this);
    painter_ultra_center.setRenderHint(QPainter::Antialiasing, true);//设置渲染,启动反锯齿
    painter_ultra_center.translate(center_x-70, center_y+210);
    if(flag_show_obstacle)
    {
        gradientArc(&painter_ultra_center, radius, 230,  90, qRgb(85, 255, 127));
    }
    //超声波右
    QPainter painter_ultra_right(this);
    painter_ultra_right.setRenderHint(QPainter::Antialiasing, true);//设置渲染,启动反锯齿
    painter_ultra_right.translate(center_x-40, center_y+210);
    if(flag_show_obstacle)
    {
        gradientArc(&painter_ultra_right, radius, 225,  90, qRgb(85, 255, 127));
    }
    radius_mili+=10;
    if (radius_mili>50)
        radius_mili=0;
    // 毫米波后左
    QPainter painter_mili_back_left(this);
    painter_mili_back_left.setRenderHint(QPainter::Antialiasing, true);//设置渲染,启动反锯齿
    painter_mili_back_left.translate(center_x-80, center_y+200); //
    if(flag_show_obstacle)
    {
        gradientArc(&painter_mili_back_left, radius_mili, 240,  60 ,qRgb(141, 182, 250));
    }
    // 毫米波后右
    QPainter painter_mili_back_right(this);
    painter_mili_back_right.setRenderHint(QPainter::Antialiasing, true);//设置渲染,启动反锯齿
    painter_mili_back_right.translate(center_x-50, center_y+200); //
    if(flag_show_obstacle)
    {
        gradientArc(&painter_mili_back_right, radius_mili, 240,  60 ,qRgb(141, 182, 250));
    }
    // 毫米波右
    QPainter painter_mili_right(this);
    painter_mili_right.setRenderHint(QPainter::Antialiasing, true);//设置渲染,启动反锯齿
    painter_mili_right.translate(center_x-45, center_y+160); //
    if(flag_show_obstacle)
    {
        gradientArc(&painter_mili_right, radius_mili, 330,  60 ,qRgb(141, 182, 250));
    }
    // 毫米波左
    QPainter painter_mili_left(this);
    painter_mili_left.setRenderHint(QPainter::Antialiasing, true);//设置渲染,启动反锯齿
    painter_mili_left.translate(center_x-95, center_y+160); //
    if(flag_show_obstacle)
    {
        gradientArc(&painter_mili_left, radius_mili, 150,  60 ,qRgb(141, 182, 250));
    }
    radius_laser+=20;
    if (radius_laser>100)
        radius_laser=0;
    // 3D激光
    QPainter painter_laser(this);
    painter_laser.setRenderHint(QPainter::Antialiasing, true);//设置渲染,启动反锯齿
    painter_laser.translate(center_x-70, center_y+110); //
    if(flag_show_obstacle)
    {
        gradientArc(&painter_laser, radius_laser, 65,  45 ,qRgb(138, 226, 52));
    }
    radius_camera+=10;
    if (radius_camera>50)
        radius_camera=0;
    // 深度相机
    QPainter painter_camera(this);
    painter_camera.setRenderHint(QPainter::Antialiasing, true);//设置渲染,启动反锯齿
    painter_camera.translate(center_x-70, center_y+110); //
    if(flag_show_obstacle)
    {
        gradientArc(&painter_camera, radius_camera, 50,  80 ,qRgb(170, 170, 170));
    }
    }
}
void MyQLabel::gradientArc(QPainter *painter, int radius, int startAngle, int angleLength, QRgb color)
{
    /**
     * 参数二：半径
     * 参数三：开始的角度
     * 参数四：指扫取的角度-顺时针（360度 / 8 = 45度）
     * 参数五：圆环的高度
     * 参数六：填充色
    **/
    // 渐变色
    QRadialGradient gradient(0, 0, radius);
    gradient.setColorAt(0, Qt::white);
    gradient.setColorAt(1.0, color);
    painter->setBrush(gradient);

    // << 1（左移1位）相当于radius*2 即：150*2=300
    //QRectF(-150, -150, 300, 300)
    QRectF rect(-radius, -radius, radius << 1, radius << 1);
    QPainterPath path;
    path.arcTo(rect, startAngle, angleLength);

    painter->setPen(Qt::NoPen);
    painter->drawPath(path);
}
