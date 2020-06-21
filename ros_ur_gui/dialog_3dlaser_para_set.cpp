#include "dialog_3dlaser_para_set.h"
#include "ui_dialog_3dlaser_para_set.h"

Dialog_3Dlaser_para_set::Dialog_3Dlaser_para_set(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_3Dlaser_para_set)
{
    ui->setupUi(this);
}

Dialog_3Dlaser_para_set::~Dialog_3Dlaser_para_set()
{
    delete ui;
}
