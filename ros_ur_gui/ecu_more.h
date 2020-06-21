#ifndef ECU_MORE_H
#define ECU_MORE_H

#include <QDialog>

namespace Ui {
class ecu_more;
}

class ecu_more : public QDialog
{
    Q_OBJECT

public:
    explicit ecu_more(QWidget *parent = nullptr);
    ~ecu_more();

private:
    Ui::ecu_more *ui;
};

#endif // ECU_MORE_H
