#include "dialog_ultrasonic_radar_para_set.h"
#include "ui_dialog_ultrasonic_radar_para_set.h"

dialog_ultrasonic_radar_para_set::dialog_ultrasonic_radar_para_set(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_ultrasonic_radar_para_set)
{
    ui->setupUi(this);
}

dialog_ultrasonic_radar_para_set::~dialog_ultrasonic_radar_para_set()
{
    delete ui;
}
