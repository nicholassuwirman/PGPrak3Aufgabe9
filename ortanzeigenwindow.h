#ifndef ORTANZEIGENWINDOW_H
#define ORTANZEIGENWINDOW_H

#include "navigationssystem.h"
#include <QDialog>

namespace Ui {
class ortAnzeigenWindow;
}

class ortAnzeigenWindow : public QDialog, protected NavigationsSystem
{
    Q_OBJECT

public:
    explicit ortAnzeigenWindow(QWidget *parent = nullptr, std::vector<Ort*> *vector = nullptr);  // Ensure the constructor matches here
    ~ortAnzeigenWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ortAnzeigenWindow *ui;
    std::vector<Ort*> *ortVector;
};

#endif // ORTANZEIGENWINDOW_H
