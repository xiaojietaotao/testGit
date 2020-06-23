/********************************************************************************
** Form generated from reading UI file 'workset.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKSET_H
#define UI_WORKSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_workset
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QGridLayout *gridLayout_4;
    QLabel *label_653;
    QLineEdit *lineEdit_216;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEdit_217;
    QLabel *label_654;
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

    void setupUi(QDialog *workset)
    {
        if (workset->objectName().isEmpty())
            workset->setObjectName(QString::fromUtf8("workset"));
        workset->resize(400, 300);
        buttonBox = new QDialogButtonBox(workset);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(workset);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 90, 135, 22));
        gridLayout_4 = new QGridLayout(verticalLayoutWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_653 = new QLabel(verticalLayoutWidget);
        label_653->setObjectName(QString::fromUtf8("label_653"));
        label_653->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_653, 0, 0, 1, 1);

        lineEdit_216 = new QLineEdit(verticalLayoutWidget);
        lineEdit_216->setObjectName(QString::fromUtf8("lineEdit_216"));
        lineEdit_216->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_216, 0, 1, 1, 1);

        gridLayoutWidget_4 = new QWidget(workset);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(240, 90, 111, 22));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit_217 = new QLineEdit(gridLayoutWidget_4);
        lineEdit_217->setObjectName(QString::fromUtf8("lineEdit_217"));
        lineEdit_217->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lineEdit_217, 0, 2, 1, 1);

        label_654 = new QLabel(gridLayoutWidget_4);
        label_654->setObjectName(QString::fromUtf8("label_654"));
        label_654->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_654, 0, 0, 1, 2);

        gridLayoutWidget_6 = new QWidget(workset);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(40, 140, 301, 31));
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

        lbl_vertex_number_34 = new QLabel(workset);
        lbl_vertex_number_34->setObjectName(QString::fromUtf8("lbl_vertex_number_34"));
        lbl_vertex_number_34->setGeometry(QRect(40, 50, 311, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        lbl_vertex_number_34->setFont(font);
        lbl_vertex_number_34->setStyleSheet(QString::fromUtf8("background-color: rgb(37, 162, 242);"));
        lbl_vertex_number_34->setAlignment(Qt::AlignCenter);
        gridLayoutWidget_5 = new QWidget(workset);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(150, 110, 111, 22));
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


        retranslateUi(workset);
        QObject::connect(buttonBox, SIGNAL(accepted()), workset, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), workset, SLOT(reject()));

        QMetaObject::connectSlotsByName(workset);
    } // setupUi

    void retranslateUi(QDialog *workset)
    {
        workset->setWindowTitle(QCoreApplication::translate("workset", "Dialog", nullptr));
        label_653->setText(QCoreApplication::translate("workset", "IP:", nullptr));
        lineEdit_216->setText(QCoreApplication::translate("workset", "192.168.10.1", nullptr));
        lineEdit_217->setText(QCoreApplication::translate("workset", "8888", nullptr));
        label_654->setText(QCoreApplication::translate("workset", "\347\253\257\345\217\243\345\217\267:", nullptr));
        pBtn_delete_edge_15->setText(QCoreApplication::translate("workset", "\350\277\236\346\216\245", nullptr));
        pBtn_delete_edge_16->setText(QCoreApplication::translate("workset", "\344\277\235\345\255\230", nullptr));
        pBtn_delete_edge_17->setText(QCoreApplication::translate("workset", "\345\205\263\351\227\255", nullptr));
        lbl_vertex_number_34->setText(QCoreApplication::translate("workset", "\346\211\276\345\271\263\347\263\273\347\273\237\351\200\232\350\256\257\350\256\276\347\275\256", nullptr));
        label_655->setText(QCoreApplication::translate("workset", "\350\277\236\346\216\245\347\212\266\346\200\201:", nullptr));
        lineEdit_218->setText(QCoreApplication::translate("workset", "\346\210\220\345\212\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workset: public Ui_workset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKSET_H
