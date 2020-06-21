#ifndef WORKDATA_PINGDI_H
#define WORKDATA_PINGDI_H

#include <QDialog>

namespace Ui {
class workdata_pingdi;
}

class workdata_pingdi : public QDialog
{
    Q_OBJECT

public:
    explicit workdata_pingdi(QWidget *parent = nullptr);
    ~workdata_pingdi();

private:
    Ui::workdata_pingdi *ui;
};

#endif // WORKDATA_PINGDI_H
