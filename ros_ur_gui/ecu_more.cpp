#include "ecu_more.h"
#include "ui_ecu_more.h"

ecu_more::ecu_more(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ecu_more)
{
    ui->setupUi(this);
}

ecu_more::~ecu_more()
{
    delete ui;
}
