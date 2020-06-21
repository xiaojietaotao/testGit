#include "workdata_yalu.h"
#include "ui_workdata_yalu.h"

workdata_yalu::workdata_yalu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::workdata_yalu)
{
    ui->setupUi(this);
}

workdata_yalu::~workdata_yalu()
{
    delete ui;
}
