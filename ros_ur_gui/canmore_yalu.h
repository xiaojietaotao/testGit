#ifndef CANMORE_YALU_H
#define CANMORE_YALU_H

#include <QDialog>

namespace Ui {
class canmore_yalu;
}

class canmore_yalu : public QDialog
{
    Q_OBJECT

public:
    explicit canmore_yalu(QWidget *parent = nullptr);
    ~canmore_yalu();

private:
    Ui::canmore_yalu *ui;
};

#endif // CANMORE_YALU_H
