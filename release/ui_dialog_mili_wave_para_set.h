/********************************************************************************
** Form generated from reading UI file 'dialog_mili_wave_para_set.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_MILI_WAVE_PARA_SET_H
#define UI_DIALOG_MILI_WAVE_PARA_SET_H

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

class Ui_dialog_mili_wave_para_set
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *le_para1;
    QLineEdit *le_para2;
    QLabel *label_11;
    QLabel *label_32;
    QLabel *label_33;

    void setupUi(QDialog *dialog_mili_wave_para_set)
    {
        if (dialog_mili_wave_para_set->objectName().isEmpty())
            dialog_mili_wave_para_set->setObjectName(QStringLiteral("dialog_mili_wave_para_set"));
        dialog_mili_wave_para_set->resize(400, 300);
        buttonBox = new QDialogButtonBox(dialog_mili_wave_para_set);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        le_para1 = new QLineEdit(dialog_mili_wave_para_set);
        le_para1->setObjectName(QStringLiteral("le_para1"));
        le_para1->setGeometry(QRect(130, 50, 51, 25));
        le_para2 = new QLineEdit(dialog_mili_wave_para_set);
        le_para2->setObjectName(QStringLiteral("le_para2"));
        le_para2->setGeometry(QRect(130, 80, 51, 25));
        label_11 = new QLabel(dialog_mili_wave_para_set);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(80, 10, 261, 20));
        label_11->setStyleSheet(QStringLiteral("background-color: rgb(37, 162, 242);"));
        label_11->setAlignment(Qt::AlignCenter);
        label_32 = new QLabel(dialog_mili_wave_para_set);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(40, 50, 81, 20));
        label_33 = new QLabel(dialog_mili_wave_para_set);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(40, 80, 81, 20));

        retranslateUi(dialog_mili_wave_para_set);
        QObject::connect(buttonBox, SIGNAL(accepted()), dialog_mili_wave_para_set, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dialog_mili_wave_para_set, SLOT(reject()));

        QMetaObject::connectSlotsByName(dialog_mili_wave_para_set);
    } // setupUi

    void retranslateUi(QDialog *dialog_mili_wave_para_set)
    {
        dialog_mili_wave_para_set->setWindowTitle(QApplication::translate("dialog_mili_wave_para_set", "Dialog", 0));
        le_para1->setText(QString());
        le_para2->setText(QString());
        label_11->setText(QApplication::translate("dialog_mili_wave_para_set", "\346\257\253\347\261\263\346\263\242\351\233\267\350\276\276\350\277\236\346\216\245\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        label_32->setText(QApplication::translate("dialog_mili_wave_para_set", "\345\217\202\346\225\260\350\256\276\347\275\2561\357\274\232", 0));
        label_33->setText(QApplication::translate("dialog_mili_wave_para_set", "\345\217\202\346\225\260\350\256\276\347\275\2562\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class dialog_mili_wave_para_set: public Ui_dialog_mili_wave_para_set {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_MILI_WAVE_PARA_SET_H
