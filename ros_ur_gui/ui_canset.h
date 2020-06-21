/********************************************************************************
** Form generated from reading UI file 'canset.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANSET_H
#define UI_CANSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_canset
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_7;
    QPushButton *pBtn_delete_edge_15;
    QPushButton *pBtn_delete_edge_16;
    QPushButton *pBtn_delete_edge_17;
    QLabel *lbl_vertex_number_34;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_6;
    QLabel *label_655;
    QLineEdit *lineEdit_218;
    QLabel *label_653;
    QComboBox *select_car;

    void setupUi(QDialog *canset)
    {
        if (canset->objectName().isEmpty())
            canset->setObjectName(QString::fromUtf8("canset"));
        canset->resize(400, 300);
        buttonBox = new QDialogButtonBox(canset);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(canset);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 40, 321, 151));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_6 = new QWidget(frame);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(30, 110, 281, 31));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        pBtn_delete_edge_15 = new QPushButton(gridLayoutWidget_6);
        pBtn_delete_edge_15->setObjectName(QString::fromUtf8("pBtn_delete_edge_15"));
        pBtn_delete_edge_15->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));

        gridLayout_7->addWidget(pBtn_delete_edge_15, 0, 0, 1, 1);

        pBtn_delete_edge_16 = new QPushButton(gridLayoutWidget_6);
        pBtn_delete_edge_16->setObjectName(QString::fromUtf8("pBtn_delete_edge_16"));
        pBtn_delete_edge_16->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));

        gridLayout_7->addWidget(pBtn_delete_edge_16, 0, 1, 1, 1);

        pBtn_delete_edge_17 = new QPushButton(gridLayoutWidget_6);
        pBtn_delete_edge_17->setObjectName(QString::fromUtf8("pBtn_delete_edge_17"));
        pBtn_delete_edge_17->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 127);"));

        gridLayout_7->addWidget(pBtn_delete_edge_17, 0, 2, 1, 1);

        lbl_vertex_number_34 = new QLabel(frame);
        lbl_vertex_number_34->setObjectName(QString::fromUtf8("lbl_vertex_number_34"));
        lbl_vertex_number_34->setGeometry(QRect(30, 20, 281, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        lbl_vertex_number_34->setFont(font);
        lbl_vertex_number_34->setStyleSheet(QString::fromUtf8("background-color: rgb(37, 162, 242);"));
        lbl_vertex_number_34->setAlignment(Qt::AlignCenter);
        gridLayoutWidget_5 = new QWidget(frame);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(200, 60, 111, 22));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_655 = new QLabel(gridLayoutWidget_5);
        label_655->setObjectName(QString::fromUtf8("label_655"));
        label_655->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_655, 0, 0, 1, 1);

        lineEdit_218 = new QLineEdit(gridLayoutWidget_5);
        lineEdit_218->setObjectName(QString::fromUtf8("lineEdit_218"));
        lineEdit_218->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(lineEdit_218, 0, 1, 1, 1);

        label_653 = new QLabel(frame);
        label_653->setObjectName(QString::fromUtf8("label_653"));
        label_653->setGeometry(QRect(30, 60, 81, 20));
        label_653->setAlignment(Qt::AlignCenter);
        select_car = new QComboBox(frame);
        select_car->addItem(QString());
        select_car->addItem(QString());
        select_car->setObjectName(QString::fromUtf8("select_car"));
        select_car->setGeometry(QRect(110, 60, 51, 22));

        retranslateUi(canset);
        QObject::connect(buttonBox, SIGNAL(accepted()), canset, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), canset, SLOT(reject()));

        QMetaObject::connectSlotsByName(canset);
    } // setupUi

    void retranslateUi(QDialog *canset)
    {
        canset->setWindowTitle(QCoreApplication::translate("canset", "Dialog", nullptr));
        pBtn_delete_edge_15->setText(QCoreApplication::translate("canset", "\350\277\236\346\216\245", nullptr));
        pBtn_delete_edge_16->setText(QCoreApplication::translate("canset", "\344\277\235\345\255\230", nullptr));
        pBtn_delete_edge_17->setText(QCoreApplication::translate("canset", "\345\205\263\351\227\255", nullptr));
        lbl_vertex_number_34->setText(QCoreApplication::translate("canset", "ECU\351\200\232\350\256\257\350\256\276\347\275\256", nullptr));
        label_655->setText(QCoreApplication::translate("canset", "\350\277\236\346\216\245\347\212\266\346\200\201:", nullptr));
        lineEdit_218->setText(QCoreApplication::translate("canset", "\346\210\220\345\212\237", nullptr));
        label_653->setText(QCoreApplication::translate("canset", "\346\263\242\347\211\271\347\216\207(kbps)", nullptr));
        select_car->setItemText(0, QCoreApplication::translate("canset", "250", nullptr));
        select_car->setItemText(1, QCoreApplication::translate("canset", "500", nullptr));

    } // retranslateUi

};

namespace Ui {
    class canset: public Ui_canset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANSET_H
