/********************************************************************************
** Form generated from reading UI file 'entfernungwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTFERNUNGWINDOW_H
#define UI_ENTFERNUNGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_entfernungWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_input1;
    QLineEdit *lineEdit_input2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_outputFirstLoc;
    QLabel *label_4;
    QLabel *label_outputSecondLoc;
    QLabel *label_5;
    QLabel *label_result;
    QLabel *label_6;

    void setupUi(QDialog *entfernungWindow)
    {
        if (entfernungWindow->objectName().isEmpty())
            entfernungWindow->setObjectName("entfernungWindow");
        entfernungWindow->resize(555, 423);
        label = new QLabel(entfernungWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 381, 16));
        label_2 = new QLabel(entfernungWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 70, 401, 16));
        lineEdit_input1 = new QLineEdit(entfernungWindow);
        lineEdit_input1->setObjectName("lineEdit_input1");
        lineEdit_input1->setGeometry(QRect(20, 40, 131, 24));
        lineEdit_input2 = new QLineEdit(entfernungWindow);
        lineEdit_input2->setObjectName("lineEdit_input2");
        lineEdit_input2->setGeometry(QRect(20, 90, 131, 24));
        pushButton = new QPushButton(entfernungWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 140, 80, 24));
        label_3 = new QLabel(entfernungWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 190, 121, 16));
        label_outputFirstLoc = new QLabel(entfernungWindow);
        label_outputFirstLoc->setObjectName("label_outputFirstLoc");
        label_outputFirstLoc->setGeometry(QRect(150, 190, 61, 16));
        label_4 = new QLabel(entfernungWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(220, 190, 21, 16));
        label_outputSecondLoc = new QLabel(entfernungWindow);
        label_outputSecondLoc->setObjectName("label_outputSecondLoc");
        label_outputSecondLoc->setGeometry(QRect(250, 190, 71, 16));
        label_5 = new QLabel(entfernungWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(330, 190, 49, 16));
        label_result = new QLabel(entfernungWindow);
        label_result->setObjectName("label_result");
        label_result->setGeometry(QRect(380, 190, 51, 16));
        label_6 = new QLabel(entfernungWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(460, 190, 49, 16));

        retranslateUi(entfernungWindow);

        QMetaObject::connectSlotsByName(entfernungWindow);
    } // setupUi

    void retranslateUi(QDialog *entfernungWindow)
    {
        entfernungWindow->setWindowTitle(QCoreApplication::translate("entfernungWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("entfernungWindow", "Name of the first location (Adresse or POI)?", nullptr));
        label_2->setText(QCoreApplication::translate("entfernungWindow", "Name of the second location (Adresse or POI)?", nullptr));
        pushButton->setText(QCoreApplication::translate("entfernungWindow", "Enter", nullptr));
        label_3->setText(QCoreApplication::translate("entfernungWindow", "The distance between", nullptr));
        label_outputFirstLoc->setText(QString());
        label_4->setText(QCoreApplication::translate("entfernungWindow", "and", nullptr));
        label_outputSecondLoc->setText(QString());
        label_5->setText(QCoreApplication::translate("entfernungWindow", "is", nullptr));
        label_result->setText(QString());
        label_6->setText(QCoreApplication::translate("entfernungWindow", "units.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class entfernungWindow: public Ui_entfernungWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTFERNUNGWINDOW_H
