#ifndef DIALOG_CONTOL_H
#define DIALOG_CONTOL_H

#include <QDialog>

namespace Ui {
class dialog_contol;
}

class dialog_contol : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_contol(QWidget *parent = nullptr);
    ~dialog_contol();

private:
    Ui::dialog_contol *ui;
};

#endif // DIALOG_CONTOL_H
