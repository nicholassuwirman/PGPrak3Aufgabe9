#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ortanlegen.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , ortWindow(nullptr)  // Initialize ortDialog to nullptr
    , ortAnzeigen(nullptr)  //ini HARUS DINITIALIZE DULUY KE NULLPTR KALO GA CRASH!!!
    , entfernungWindow(nullptr)
    , speichernLadenWindow(nullptr)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    if (ortWindow)
        delete ortWindow;  // Clean up ortDialog if it was created
}

void MainWindow::showInputWindow()
{

}


void MainWindow::on_pushButton_clicked()
{
    int menuIntInput = ui->lineMainInput->text().toInt();

    switch(menuIntInput) {
    case 1:
        if (!ortWindow)
            ortWindow = new ortAnlegen(this, &ortVector);
        ortWindow->show();
        break;
    case 2:
        if(!ortAnzeigen)
            ortAnzeigen = new ortAnzeigenWindow(this, &ortVector);
        ortAnzeigen->show();
        break;
    case 3:
        if(!entfernungWindow)
            entfernungWindow = new class entfernungWindow(this, &ortVector);
        entfernungWindow->show();
        break;
    case 4:
        if(!speichernLadenWindow)
            speichernLadenWindow = new  class speichernLadenWindow(this, &ortVector);
        speichernLadenWindow->show();
        break;
    case 5:
        break;
    case 0:
    default:
        break;
    }
}

