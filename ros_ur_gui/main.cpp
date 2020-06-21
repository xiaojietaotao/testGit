#include "mainwindow.h"
#include <QApplication>
#include<QTextCodec>
#include "mythead.h"

extern "C"
{
    #include "setup.h"
}

int main(int argc, char *argv[])
{
//    Mythead mythread;
//    mythread.start();

    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle(QWidget::tr("T-Box"));
    w.show();

    return a.exec();
}
