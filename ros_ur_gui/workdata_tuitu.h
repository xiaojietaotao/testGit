#ifndef WORKDATA_TUITU_H
#define WORKDATA_TUITU_H

#include <QDialog>

namespace Ui {
class workdata_tuitu;
}

class workdata_tuitu : public QDialog
{
    Q_OBJECT

public:
    explicit workdata_tuitu(QWidget *parent = nullptr);
    ~workdata_tuitu();

private:
    Ui::workdata_tuitu *ui;
};

#endif // WORKDATA_TUITU_H
