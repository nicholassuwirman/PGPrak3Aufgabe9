/********************************************************************************
** Form generated from reading UI file 'ortanzeigenwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORTANZEIGENWINDOW_H
#define UI_ORTANZEIGENWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ortAnzeigenWindow
{
public:
    QLabel *label;
    QLineEdit *lineEdit_anzeigenInput;
    QPushButton *pushButton;
    QTextEdit *textEdit_description;

    void setupUi(QDialog *ortAnzeigenWindow)
    {
        if (ortAnzeigenWindow->objectName().isEmpty())
            ortAnzeigenWindow->setObjectName("ortAnzeigenWindow");
        ortAnzeigenWindow->resize(833, 559);
        label = new QLabel(ortAnzeigenWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 321, 16));
        lineEdit_anzeigenInput = new QLineEdit(ortAnzeigenWindow);
        lineEdit_anzeigenInput->setObjectName("lineEdit_anzeigenInput");
        lineEdit_anzeigenInput->setGeometry(QRect(20, 60, 113, 24));
        pushButton = new QPushButton(ortAnzeigenWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 60, 80, 24));
        textEdit_description = new QTextEdit(ortAnzeigenWindow);
        textEdit_description->setObjectName("textEdit_description");
        textEdit_description->setGeometry(QRect(20, 100, 721, 351));

        retranslateUi(ortAnzeigenWindow);

        QMetaObject::connectSlotsByName(ortAnzeigenWindow);
    } // setupUi

    void retranslateUi(QDialog *ortAnzeigenWindow)
    {
        ortAnzeigenWindow->setWindowTitle(QCoreApplication::translate("ortAnzeigenWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ortAnzeigenWindow", "Adresse oder poi anzeigen? (Tippen Sie adresse oder poi)", nullptr));
        pushButton->setText(QCoreApplication::translate("ortAnzeigenWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ortAnzeigenWindow: public Ui_ortAnzeigenWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORTANZEIGENWINDOW_H
