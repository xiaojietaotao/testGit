#-------------------------------------------------
#
# Project created by QtCreator 2020-03-13T18:07:58
#
#-------------------------------------------------
LIBS += -L/home/chentao -lhello -lcanandtcp
LIBS += -lcurl -L/home/chentao/_armlibs/lib

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ros_ur_gui
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        MyQLabel.cpp \
        canmore_pingdi.cpp \
        canmore_tuitu.cpp \
        canmore_yalu.cpp \
        common.cpp \
        dialog_3dlaser_para_set.cpp \
        dialog_contol.cpp \
        dialog_mili_wave_para_set.cpp \
        dialog_ultrasonic_radar_para_set.cpp \
        ecu_more.cpp \
        main.cpp \
        mainwindow.cpp \
        scraper_more.cpp \
        workdata_pingdi.cpp \
        workdata_tuitu.cpp \
        workdata_yalu.cpp \
        workset.cpp \
    mythead.cpp

HEADERS += \
        MyQLabel.h \
        canmore_pingdi.h \
        canmore_tuitu.h \
        canmore_yalu.h \
        common.h \
        dialog_3dlaser_para_set.h \
        dialog_contol.h \
        dialog_mili_wave_para_set.h \
        dialog_ultrasonic_radar_para_set.h \
        ecu_more.h \
        mainwindow.h \
        scraper_more.h \
        workdata_pingdi.h \
        workdata_tuitu.h \
        workdata_yalu.h \
        workset.h \
    setup.h \
    manned_bulldozer_can.h \
    manned_grader_can.h \
    manned_roller_can.h \
    unmannedbulldozer_can.h \
    mythead.h \
    mechanicals.h

FORMS += \
        canmore_pingdi.ui \
        canmore_tuitu.ui \
        canmore_yalu.ui \
        dialog_3dlaser_para_set.ui \
        dialog_contol.ui \
        dialog_mili_wave_para_set.ui \
        dialog_ultrasonic_radar_para_set.ui \
        ecu_more.ui \
        mainwindow.ui \
        scraper_more.ui \
        workdata_pingdi.ui \
        workdata_tuitu.ui \
        workdata_yalu.ui \
        workset.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
