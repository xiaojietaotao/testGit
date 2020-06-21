#include "canmore_pingdi.h"
#include "ui_canmore_pingdi.h"

canmore_pingdi::canmore_pingdi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::canmore_pingdi)
{
    ui->setupUi(this);
}

canmore_pingdi::~canmore_pingdi()
{
    delete ui;
}
