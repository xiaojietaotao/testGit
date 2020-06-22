/********************************************************************************
** Form generated from reading UI file 'workdata_tuitu.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKDATA_TUITU_H
#define UI_WORKDATA_TUITU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_workdata_tuitu
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_67;

    void setupUi(QDialog *workdata_tuitu)
    {
        if (workdata_tuitu->objectName().isEmpty())
            workdata_tuitu->setObjectName(QStringLiteral("workdata_tuitu"));
        workdata_tuitu->resize(400, 300);
        buttonBox = new QDialogButtonBox(workdata_tuitu);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_67 = new QLabel(workdata_tuitu);
        label_67->setObjectName(QStringLiteral("label_67"));
        label_67->setGeometry(QRect(150, 20, 81, 21));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_67->setFont(font);
        label_67->setStyleSheet(QStringLiteral("background-color:rgb(37, 162, 242);"));
        label_67->setAlignment(Qt::AlignCenter);

        retranslateUi(workdata_tuitu);
        QObject::connect(buttonBox, SIGNAL(accepted()), workdata_tuitu, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), workdata_tuitu, SLOT(reject()));

        QMetaObject::connectSlotsByName(workdata_tuitu);
    } // setupUi

    void retranslateUi(QDialog *workdata_tuitu)
    {
        workdata_tuitu->setWindowTitle(QApplication::translate("workdata_tuitu", "Dialog", 0));
        label_67->setText(QApplication::translate("workdata_tuitu", "\346\226\275\345\267\245\344\275\234\344\270\232\346\225\260\346\215\256", 0));
    } // retranslateUi

};

namespace Ui {
    class workdata_tuitu: public Ui_workdata_tuitu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKDATA_TUITU_H
