#include "canmore_tuitu.h"
#include "ui_canmore_tuitu.h"

canmore_tuitu::canmore_tuitu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::canmore_tuitu)
{
    ui->setupUi(this);
}

canmore_tuitu::~canmore_tuitu()
{
    delete ui;
}
