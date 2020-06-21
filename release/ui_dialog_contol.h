/********************************************************************************
** Form generated from reading UI file 'dialog_contol.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CONTOL_H
#define UI_DIALOG_CONTOL_H

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

class Ui_dialog_contol
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_32;
    QLineEdit *le_para2;
    QLabel *label_11;
    QLineEdit *le_para1;
    QLabel *label_33;

    void setupUi(QDialog *dialog_contol)
    {
        if (dialog_contol->objectName().isEmpty())
            dialog_contol->setObjectName(QStringLiteral("dialog_contol"));
        dialog_contol->resize(400, 300);
        buttonBox = new QDialogButtonBox(dialog_contol);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_32 = new QLabel(dialog_contol);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(30, 50, 81, 20));
        le_para2 = new QLineEdit(dialog_contol);
        le_para2->setObjectName(QStringLiteral("le_para2"));
        le_para2->setGeometry(QRect(120, 80, 51, 25));
        label_11 = new QLabel(dialog_contol);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(70, 10, 261, 20));
        label_11->setStyleSheet(QStringLiteral("background-color: rgb(37, 162, 242);"));
        label_11->setAlignment(Qt::AlignCenter);
        le_para1 = new QLineEdit(dialog_contol);
        le_para1->setObjectName(QStringLiteral("le_para1"));
        le_para1->setGeometry(QRect(120, 50, 51, 25));
        label_33 = new QLabel(dialog_contol);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(30, 80, 81, 20));

        retranslateUi(dialog_contol);
        QObject::connect(buttonBox, SIGNAL(accepted()), dialog_contol, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dialog_contol, SLOT(reject()));

        QMetaObject::connectSlotsByName(dialog_contol);
    } // setupUi

    void retranslateUi(QDialog *dialog_contol)
    {
        dialog_contol->setWindowTitle(QApplication::translate("dialog_contol", "Dialog", 0));
        label_32->setText(QApplication::translate("dialog_contol", "\350\256\276\347\275\256\345\217\202\346\225\2601\357\274\232", 0));
        le_para2->setText(QString());
        label_11->setText(QApplication::translate("dialog_contol", "\344\275\234\344\270\232\350\275\250\350\277\271\350\267\237\350\270\252\344\270\216\346\216\247\345\210\266\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        le_para1->setText(QString());
        label_33->setText(QApplication::translate("dialog_contol", "\350\256\276\347\275\256\345\217\202\346\225\2602\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class dialog_contol: public Ui_dialog_contol {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CONTOL_H
