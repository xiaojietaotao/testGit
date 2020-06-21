#ifndef SCRAPER_MORE_H
#define SCRAPER_MORE_H

#include <QDialog>

namespace Ui {
class scraper_more;
}

class scraper_more : public QDialog
{
    Q_OBJECT

public:
    explicit scraper_more(QWidget *parent = nullptr);
    ~scraper_more();

private:
    Ui::scraper_more *ui;
};

#endif // SCRAPER_MORE_H
