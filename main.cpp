#include "mainwindow.h"
using namespace std;
#include <QApplication>
#include "navigationssystem.h"
#include "ort.h"
#include <iostream>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    int menuIntInput = 0;
    NavigationsSystem naviObj;
    naviObj.createMeinOrt();

    return a.exec();
}
