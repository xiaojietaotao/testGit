/********************************************************************************
** Form generated from reading UI file 'workdata_pingdi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKDATA_PINGDI_H
#define UI_WORKDATA_PINGDI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_workdata_pingdi
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_67;

    void setupUi(QDialog *workdata_pingdi)
    {
        if (workdata_pingdi->objectName().isEmpty())
            workdata_pingdi->setObjectName(QString::fromUtf8("workdata_pingdi"));
        workdata_pingdi->resize(400, 300);
        buttonBox = new QDialogButtonBox(workdata_pingdi);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_67 = new QLabel(workdata_pingdi);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setGeometry(QRect(140, 20, 81, 21));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_67->setFont(font);
        label_67->setStyleSheet(QString::fromUtf8("background-color:rgb(37, 162, 242);"));
        label_67->setAlignment(Qt::AlignCenter);

        retranslateUi(workdata_pingdi);
        QObject::connect(buttonBox, SIGNAL(accepted()), workdata_pingdi, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), workdata_pingdi, SLOT(reject()));

        QMetaObject::connectSlotsByName(workdata_pingdi);
    } // setupUi

    void retranslateUi(QDialog *workdata_pingdi)
    {
        workdata_pingdi->setWindowTitle(QCoreApplication::translate("workdata_pingdi", "Dialog", nullptr));
        label_67->setText(QCoreApplication::translate("workdata_pingdi", "\346\226\275\345\267\245\344\275\234\344\270\232\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workdata_pingdi: public Ui_workdata_pingdi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKDATA_PINGDI_H
