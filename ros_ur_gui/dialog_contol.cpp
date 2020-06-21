#include "dialog_contol.h"
#include "ui_dialog_contol.h"

dialog_contol::dialog_contol(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_contol)
{
    ui->setupUi(this);
}

dialog_contol::~dialog_contol()
{
    delete ui;
}
