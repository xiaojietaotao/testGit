#include "workdata_pingdi.h"
#include "ui_workdata_pingdi.h"

workdata_pingdi::workdata_pingdi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::workdata_pingdi)
{
    ui->setupUi(this);
}

workdata_pingdi::~workdata_pingdi()
{
    delete ui;
}
