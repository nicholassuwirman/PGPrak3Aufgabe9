/********************************************************************************
** Form generated from reading UI file 'speichernladenwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPEICHERNLADENWINDOW_H
#define UI_SPEICHERNLADENWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_speichernLadenWindow
{
public:
    QLabel *label;
    QLineEdit *lineEdit_input;
    QPushButton *pushButton;
    QLabel *label_questionFileName;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_fileName;
    QLabel *label_erfolgreich;

    void setupUi(QDialog *speichernLadenWindow)
    {
        if (speichernLadenWindow->objectName().isEmpty())
            speichernLadenWindow->setObjectName("speichernLadenWindow");
        speichernLadenWindow->resize(661, 443);
        label = new QLabel(speichernLadenWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 331, 16));
        lineEdit_input = new QLineEdit(speichernLadenWindow);
        lineEdit_input->setObjectName("lineEdit_input");
        lineEdit_input->setGeometry(QRect(20, 50, 121, 24));
        pushButton = new QPushButton(speichernLadenWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 50, 80, 24));
        label_questionFileName = new QLabel(speichernLadenWindow);
        label_questionFileName->setObjectName("label_questionFileName");
        label_questionFileName->setGeometry(QRect(20, 90, 291, 16));
        pushButton_2 = new QPushButton(speichernLadenWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(160, 120, 80, 24));
        lineEdit_fileName = new QLineEdit(speichernLadenWindow);
        lineEdit_fileName->setObjectName("lineEdit_fileName");
        lineEdit_fileName->setGeometry(QRect(20, 120, 121, 24));
        label_erfolgreich = new QLabel(speichernLadenWindow);
        label_erfolgreich->setObjectName("label_erfolgreich");
        label_erfolgreich->setGeometry(QRect(20, 180, 251, 16));

        retranslateUi(speichernLadenWindow);

        QMetaObject::connectSlotsByName(speichernLadenWindow);
    } // setupUi

    void retranslateUi(QDialog *speichernLadenWindow)
    {
        speichernLadenWindow->setWindowTitle(QCoreApplication::translate("speichernLadenWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("speichernLadenWindow", "Speichern oder laden? (tippen Sie speichern oder laden)", nullptr));
        pushButton->setText(QCoreApplication::translate("speichernLadenWindow", "Enter", nullptr));
        label_questionFileName->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("speichernLadenWindow", "Enter", nullptr));
        label_erfolgreich->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class speichernLadenWindow: public Ui_speichernLadenWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPEICHERNLADENWINDOW_H
