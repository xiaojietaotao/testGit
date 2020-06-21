#ifndef MYQLABEL_H
#define MYQLABEL_H
#include <QTimer>
#include<QList>
#include <QLabel>


class MyQLabel : public QLabel
{
public:
    explicit MyQLabel(QWidget *parent=nullptr, Qt::WindowFlags f=Qt::WindowFlags());
    explicit MyQLabel(const QString &text, QWidget *parent=nullptr, Qt::WindowFlags f=Qt::WindowFlags());

    int m_count;
    float x;
    QTimer* m_Timer;
    QList<float> xList;
    QList<float> yList;
    QList<int> direction_flagList;
public slots:
    void creatData();

protected:

    void drawline(QPaintEvent *);
    void paintEvent(QPaintEvent *) override;
    void gradientArc(QPainter *painter, int radius, int startAngle, int angleLength, QRgb color);
};

#endif // MYQLABEL_H
