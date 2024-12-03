#ifndef SPEICHERNLADENWINDOW_H
#define SPEICHERNLADENWINDOW_H

#include "navigationssystem.h"
#include <QDialog>

namespace Ui {
class speichernLadenWindow;
}

class speichernLadenWindow : public QDialog, protected NavigationsSystem
{
    Q_OBJECT

public:
    explicit speichernLadenWindow(QWidget *parent = nullptr, std::vector<Ort*> *vector = nullptr);
    ~speichernLadenWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::speichernLadenWindow *ui;
    std::vector<Ort*> *ortVector;
    bool isSpeichern = false;
    bool isLaden = false;
};

#endif // SPEICHERNLADENWINDOW_H
