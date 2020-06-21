#include "dialog_mili_wave_para_set.h"
#include "ui_dialog_mili_wave_para_set.h"

dialog_mili_wave_para_set::dialog_mili_wave_para_set(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_mili_wave_para_set)
{
    ui->setupUi(this);
}

dialog_mili_wave_para_set::~dialog_mili_wave_para_set()
{
    delete ui;
}
