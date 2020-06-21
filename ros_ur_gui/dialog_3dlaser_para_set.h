#ifndef DIALOG_3DLASER_PARA_SET_H
#define DIALOG_3DLASER_PARA_SET_H

#include <QDialog>

namespace Ui {
class Dialog_3Dlaser_para_set;
}

class Dialog_3Dlaser_para_set : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_3Dlaser_para_set(QWidget *parent = nullptr);
    ~Dialog_3Dlaser_para_set();

private:
    Ui::Dialog_3Dlaser_para_set *ui;
};

#endif // DIALOG_3DLASER_PARA_SET_H
