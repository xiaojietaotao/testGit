#ifndef WORKSET_H
#define WORKSET_H

#include <QDialog>

namespace Ui {
class workset;
}

class workset : public QDialog
{
    Q_OBJECT

public:
    explicit workset(QWidget *parent = nullptr);
    ~workset();

private:
    Ui::workset *ui;
};

#endif // WORKSET_H
