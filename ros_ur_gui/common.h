#ifndef COMMON_H
#define COMMON_H
#include<QDir>
#include<qstring.h>
#include<QApplication>
#include<QDebug>
extern int radius,radius_mili,radius_laser,radius_camera;
extern int label_x,label_y;
extern bool flag_show_obstacle;//显示壁障范围的复选框是否按下标志
extern int carKind;//选择车的类型
extern int baud_rate;//选择波特率
extern bool selpara_change_flag;//机械类型或波特率发生改变，改变为true
extern  QString path;//file path
QDir directoryOf(const QString &subdir);

#endif // COMMON_H
