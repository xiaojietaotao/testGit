#include "scraper_more.h"
#include "ui_scraper_more.h"

scraper_more::scraper_more(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::scraper_more)
{
    ui->setupUi(this);
}

scraper_more::~scraper_more()
{
    delete ui;
}
