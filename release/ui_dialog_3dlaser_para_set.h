/********************************************************************************
** Form generated from reading UI file 'dialog_3dlaser_para_set.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_3DLASER_PARA_SET_H
#define UI_DIALOG_3DLASER_PARA_SET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog_3Dlaser_para_set
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_11;
    QLineEdit *le_para1;
    QLabel *label_32;
    QLabel *label_33;
    QLineEdit *le_para2;

    void setupUi(QDialog *Dialog_3Dlaser_para_set)
    {
        if (Dialog_3Dlaser_para_set->objectName().isEmpty())
            Dialog_3Dlaser_para_set->setObjectName(QStringLiteral("Dialog_3Dlaser_para_set"));
        Dialog_3Dlaser_para_set->resize(400, 300);
        buttonBox = new QDialogButtonBox(Dialog_3Dlaser_para_set);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_11 = new QLabel(Dialog_3Dlaser_para_set);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(70, 10, 261, 20));
        label_11->setStyleSheet(QStringLiteral("background-color: rgb(37, 162, 242);"));
        label_11->setAlignment(Qt::AlignCenter);
        le_para1 = new QLineEdit(Dialog_3Dlaser_para_set);
        le_para1->setObjectName(QStringLiteral("le_para1"));
        le_para1->setGeometry(QRect(120, 50, 51, 25));
        label_32 = new QLabel(Dialog_3Dlaser_para_set);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(30, 50, 81, 20));
        label_33 = new QLabel(Dialog_3Dlaser_para_set);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(30, 80, 81, 20));
        le_para2 = new QLineEdit(Dialog_3Dlaser_para_set);
        le_para2->setObjectName(QStringLiteral("le_para2"));
        le_para2->setGeometry(QRect(120, 80, 51, 25));

        retranslateUi(Dialog_3Dlaser_para_set);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_3Dlaser_para_set, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_3Dlaser_para_set, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_3Dlaser_para_set);
    } // setupUi

    void retranslateUi(QDialog *Dialog_3Dlaser_para_set)
    {
        Dialog_3Dlaser_para_set->setWindowTitle(QApplication::translate("Dialog_3Dlaser_para_set", "Dialog", 0));
        label_11->setText(QApplication::translate("Dialog_3Dlaser_para_set", "3D\346\277\200\345\205\211\351\233\267\350\276\276\350\277\236\346\216\245\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        le_para1->setText(QString());
        label_32->setText(QApplication::translate("Dialog_3Dlaser_para_set", "\350\256\276\347\275\256\345\217\202\346\225\2601\357\274\232", 0));
        label_33->setText(QApplication::translate("Dialog_3Dlaser_para_set", "\350\256\276\347\275\256\345\217\202\346\225\2602\357\274\232", 0));
        le_para2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_3Dlaser_para_set: public Ui_Dialog_3Dlaser_para_set {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_3DLASER_PARA_SET_H
