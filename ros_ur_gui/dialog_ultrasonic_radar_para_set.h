#ifndef DIALOG_ULTRASONIC_RADAR_PARA_SET_H
#define DIALOG_ULTRASONIC_RADAR_PARA_SET_H

#include <QDialog>

namespace Ui {
class dialog_ultrasonic_radar_para_set;
}

class dialog_ultrasonic_radar_para_set : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_ultrasonic_radar_para_set(QWidget *parent = nullptr);
    ~dialog_ultrasonic_radar_para_set();

private:
    Ui::dialog_ultrasonic_radar_para_set *ui;
};

#endif // DIALOG_ULTRASONIC_RADAR_PARA_SET_H
