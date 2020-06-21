#include "canmore_yalu.h"
#include "ui_canmore_yalu.h"

canmore_yalu::canmore_yalu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::canmore_yalu)
{
    ui->setupUi(this);
}

canmore_yalu::~canmore_yalu()
{
    delete ui;
}
