#include "ortanlegenwindow.h"
#include "ui_ortAnlegenWindow.h"  // Include the correct generated header

ortAnlegenWindow::ortAnlegenWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ortAnlegenWindow)  // Initialize the UI pointer to the generated class
{
    ui->setupUi(this);  // Set up the UI elements
}

ortAnlegenWindow::~ortAnlegenWindow()
{
    delete ui;  // Clean up the UI
}
