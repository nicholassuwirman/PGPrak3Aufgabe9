/********************************************************************************
** Form generated from reading UI file 'ortanlegen.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORTANLEGEN_H
#define UI_ORTANLEGEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ortAnlegen
{
public:
    QLineEdit *lineEdit_input;
    QLabel *label;
    QLabel *label_laengen;
    QLabel *label_breiten;
    QLabel *label_genauigkeit;
    QPushButton *pushButton;
    QLabel *label_strasse;
    QLabel *label_hausnummer;
    QLabel *label_gemeinde;
    QLabel *label_plz;
    QLineEdit *lineEdit_laengen;
    QLineEdit *lineEdit_breiten;
    QLineEdit *lineEdit_genauigkeit;
    QLineEdit *lineEdit_strasse;
    QLineEdit *lineEdit_hausnummer;
    QLineEdit *lineEdit_gemeinde;
    QLineEdit *lineEdit_plz;
    QPushButton *pushButton_2;
    QLabel *label_erfolg;
    QLabel *label_debug;

    void setupUi(QDialog *ortAnlegen)
    {
        if (ortAnlegen->objectName().isEmpty())
            ortAnlegen->setObjectName("ortAnlegen");
        ortAnlegen->resize(509, 362);
        lineEdit_input = new QLineEdit(ortAnlegen);
        lineEdit_input->setObjectName("lineEdit_input");
        lineEdit_input->setGeometry(QRect(10, 30, 113, 21));
        label = new QLabel(ortAnlegen);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 391, 20));
        label_laengen = new QLabel(ortAnlegen);
        label_laengen->setObjectName("label_laengen");
        label_laengen->setGeometry(QRect(10, 60, 111, 16));
        label_breiten = new QLabel(ortAnlegen);
        label_breiten->setObjectName("label_breiten");
        label_breiten->setGeometry(QRect(10, 90, 111, 16));
        label_genauigkeit = new QLabel(ortAnlegen);
        label_genauigkeit->setObjectName("label_genauigkeit");
        label_genauigkeit->setGeometry(QRect(10, 120, 111, 16));
        pushButton = new QPushButton(ortAnlegen);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 30, 80, 24));
        label_strasse = new QLabel(ortAnlegen);
        label_strasse->setObjectName("label_strasse");
        label_strasse->setGeometry(QRect(10, 150, 121, 16));
        label_hausnummer = new QLabel(ortAnlegen);
        label_hausnummer->setObjectName("label_hausnummer");
        label_hausnummer->setGeometry(QRect(10, 180, 121, 16));
        label_gemeinde = new QLabel(ortAnlegen);
        label_gemeinde->setObjectName("label_gemeinde");
        label_gemeinde->setGeometry(QRect(10, 210, 111, 16));
        label_plz = new QLabel(ortAnlegen);
        label_plz->setObjectName("label_plz");
        label_plz->setGeometry(QRect(10, 240, 111, 16));
        lineEdit_laengen = new QLineEdit(ortAnlegen);
        lineEdit_laengen->setObjectName("lineEdit_laengen");
        lineEdit_laengen->setGeometry(QRect(140, 60, 113, 21));
        lineEdit_breiten = new QLineEdit(ortAnlegen);
        lineEdit_breiten->setObjectName("lineEdit_breiten");
        lineEdit_breiten->setGeometry(QRect(140, 90, 113, 21));
        lineEdit_genauigkeit = new QLineEdit(ortAnlegen);
        lineEdit_genauigkeit->setObjectName("lineEdit_genauigkeit");
        lineEdit_genauigkeit->setGeometry(QRect(140, 120, 113, 21));
        lineEdit_strasse = new QLineEdit(ortAnlegen);
        lineEdit_strasse->setObjectName("lineEdit_strasse");
        lineEdit_strasse->setGeometry(QRect(140, 150, 113, 21));
        lineEdit_hausnummer = new QLineEdit(ortAnlegen);
        lineEdit_hausnummer->setObjectName("lineEdit_hausnummer");
        lineEdit_hausnummer->setGeometry(QRect(140, 180, 113, 21));
        lineEdit_gemeinde = new QLineEdit(ortAnlegen);
        lineEdit_gemeinde->setObjectName("lineEdit_gemeinde");
        lineEdit_gemeinde->setGeometry(QRect(140, 210, 113, 21));
        lineEdit_plz = new QLineEdit(ortAnlegen);
        lineEdit_plz->setObjectName("lineEdit_plz");
        lineEdit_plz->setGeometry(QRect(140, 240, 113, 21));
        pushButton_2 = new QPushButton(ortAnlegen);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 280, 80, 24));
        label_erfolg = new QLabel(ortAnlegen);
        label_erfolg->setObjectName("label_erfolg");
        label_erfolg->setGeometry(QRect(10, 330, 241, 16));
        label_debug = new QLabel(ortAnlegen);
        label_debug->setObjectName("label_debug");
        label_debug->setGeometry(QRect(330, 320, 91, 16));

        retranslateUi(ortAnlegen);

        QMetaObject::connectSlotsByName(ortAnlegen);
    } // setupUi

    void retranslateUi(QDialog *ortAnlegen)
    {
        ortAnlegen->setWindowTitle(QCoreApplication::translate("ortAnlegen", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ortAnlegen", "Adresse oder point of interest einlegen?, bitte Tippen Sie adresse oder poi", nullptr));
        label_laengen->setText(QString());
        label_breiten->setText(QString());
        label_genauigkeit->setText(QString());
        pushButton->setText(QCoreApplication::translate("ortAnlegen", "Enter", nullptr));
        label_strasse->setText(QString());
        label_hausnummer->setText(QString());
        label_gemeinde->setText(QString());
        label_plz->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("ortAnlegen", "Enter", nullptr));
        label_erfolg->setText(QString());
        label_debug->setText(QCoreApplication::translate("ortAnlegen", "debug", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ortAnlegen: public Ui_ortAnlegen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORTANLEGEN_H
