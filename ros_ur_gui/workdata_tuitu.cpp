#include "workdata_tuitu.h"
#include "ui_workdata_tuitu.h"

workdata_tuitu::workdata_tuitu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::workdata_tuitu)
{
    ui->setupUi(this);
}

workdata_tuitu::~workdata_tuitu()
{
    delete ui;
}
