#ifndef WORKDATA_YALU_H
#define WORKDATA_YALU_H

#include <QDialog>

namespace Ui {
class workdata_yalu;
}

class workdata_yalu : public QDialog
{
    Q_OBJECT

public:
    explicit workdata_yalu(QWidget *parent = nullptr);
    ~workdata_yalu();

private:
    Ui::workdata_yalu *ui;
};

#endif // WORKDATA_YALU_H
