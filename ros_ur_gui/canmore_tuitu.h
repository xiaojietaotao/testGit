#ifndef CANMORE_TUITU_H
#define CANMORE_TUITU_H

#include <QDialog>

namespace Ui {
class canmore_tuitu;
}

class canmore_tuitu : public QDialog
{
    Q_OBJECT

public:
    explicit canmore_tuitu(QWidget *parent = nullptr);
    ~canmore_tuitu();

private:
    Ui::canmore_tuitu *ui;
};

#endif // CANMORE_TUITU_H
