#ifndef CANMORE_PINGDI_H
#define CANMORE_PINGDI_H

#include <QDialog>

namespace Ui {
class canmore_pingdi;
}

class canmore_pingdi : public QDialog
{
    Q_OBJECT

public:
    explicit canmore_pingdi(QWidget *parent = nullptr);
    ~canmore_pingdi();

private:
    Ui::canmore_pingdi *ui;
};

#endif // CANMORE_PINGDI_H
