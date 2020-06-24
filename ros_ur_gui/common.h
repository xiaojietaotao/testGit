#ifndef COMMON_H
#define COMMON_H
#include<QDir>
#include<qstring.h>
#include<QApplication>
#include<QDebug>
#include "mythead.h"

extern int radius,radius_mili,radius_laser,radius_camera;
extern int label_x,label_y;
extern bool flag_show_obstacle;//显示壁障范围的复选框是否按下标志
extern int carKind;//选择车的类型
extern int baud_rate;//选择波特率
extern bool selpara_change_flag;//机械类型或波特率发生改变，改变为true
extern  QString path;//file path
extern Mythead mythread;
//激光雷达检测类型对应 type_lidar 0 mmeans unknown, 1 means pedestrain,
//  2 means bicycle, 3 means car, 4 means truck/bus, 5 means very huge long cargo truck

//yolo检测类型
typedef struct{
    //cbc 激光雷达 相机障碍物检测
    int sensor_num = 2;//默认两个传感器

    int count_lidar = 0;//默认显示5个障碍物
    int type_lidar[5] = {};//雷达检测出来的障碍物类型
    float distance_lidar[5] = {};//雷达检测出来的障碍物距离
    float yaw_lidar[5] = {};//来打检测出来的障碍物角度

    int count_camera = 0;//相机的
    int type_camera[5] = {};
    float distance_camera[5] = {};
}obstacle_distance;

extern obstacle_distance msg_obstacle_distance;//激光雷达 相机 障碍物检测
QDir directoryOf(const QString &subdir);

#endif // COMMON_H
