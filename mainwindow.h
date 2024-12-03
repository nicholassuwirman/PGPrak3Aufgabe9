#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ortanlegen.h"  // Include the header for ortAnlegen
#include "ortanzeigenwindow.h"
#include "entfernungwindow.h"
#include "speichernladenwindow.h"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void showInputWindow();
private slots:

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    ortAnlegen *ortWindow;  // Pointer to ortAnlegen dialog
    ortAnzeigenWindow *ortAnzeigen;
    entfernungWindow *entfernungWindow;
    speichernLadenWindow *speichernLadenWindow;
    std::vector<Ort*> ortVector;
};

#endif // MAINWINDOW_H
