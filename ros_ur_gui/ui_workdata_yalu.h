/********************************************************************************
** Form generated from reading UI file 'workdata_yalu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKDATA_YALU_H
#define UI_WORKDATA_YALU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_workdata_yalu
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_67;

    void setupUi(QDialog *workdata_yalu)
    {
        if (workdata_yalu->objectName().isEmpty())
            workdata_yalu->setObjectName(QString::fromUtf8("workdata_yalu"));
        workdata_yalu->resize(400, 300);
        buttonBox = new QDialogButtonBox(workdata_yalu);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_67 = new QLabel(workdata_yalu);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setGeometry(QRect(150, 20, 81, 21));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_67->setFont(font);
        label_67->setStyleSheet(QString::fromUtf8("background-color:rgb(37, 162, 242);"));
        label_67->setAlignment(Qt::AlignCenter);

        retranslateUi(workdata_yalu);
        QObject::connect(buttonBox, SIGNAL(accepted()), workdata_yalu, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), workdata_yalu, SLOT(reject()));

        QMetaObject::connectSlotsByName(workdata_yalu);
    } // setupUi

    void retranslateUi(QDialog *workdata_yalu)
    {
        workdata_yalu->setWindowTitle(QCoreApplication::translate("workdata_yalu", "Dialog", nullptr));
        label_67->setText(QCoreApplication::translate("workdata_yalu", "\346\226\275\345\267\245\344\275\234\344\270\232\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workdata_yalu: public Ui_workdata_yalu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKDATA_YALU_H
