#include"common.h"
#include <vector>
#include <string>

 QString path;//文件路径
int radius=0,radius_mili=0,radius_laser=0,radius_camera=0;
int label_x,label_y;
bool flag_show_obstacle=true;
int carKind = 0;//默认是无人推土机
int baud_rate = 250;//默认波特率
bool selpara_change_flag = false;//机械类型或波特率发生改变，改变为true





QDir directoryOf(const QString &subdir)
{
    QDir dir(QApplication::applicationDirPath());
//    qDebug()<<dir.dirName();
#if defined(Q_OS_WIN)
    if (dir.dirName().startsWith( "build")
            || dir.dirName().startsWith( "release")//.toLower() == "release"
            || dir.dirName().startsWith("bin"))
        dir.cdUp();
#elif defined(Q_OS_MAC)
    if (dir.dirName() == "MacOS") {
        dir.cdUp();
        dir.cdUp();
        dir.cdUp();
    }
#endif
    dir.cd(subdir);
    return dir;
}
