#ifndef DIALOG_MILI_WAVE_PARA_SET_H
#define DIALOG_MILI_WAVE_PARA_SET_H

#include <QDialog>

namespace Ui {
class dialog_mili_wave_para_set;
}

class dialog_mili_wave_para_set : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_mili_wave_para_set(QWidget *parent = nullptr);
    ~dialog_mili_wave_para_set();

private:
    Ui::dialog_mili_wave_para_set *ui;
};

#endif // DIALOG_MILI_WAVE_PARA_SET_H
