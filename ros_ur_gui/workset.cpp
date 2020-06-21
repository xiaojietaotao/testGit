#include "workset.h"
#include "ui_workset.h"

workset::workset(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::workset)
{
    ui->setupUi(this);
}

workset::~workset()
{
    delete ui;
}
