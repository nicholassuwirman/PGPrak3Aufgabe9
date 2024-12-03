#ifndef ENTFERNUNGWINDOW_H
#define ENTFERNUNGWINDOW_H

#include <QDialog>
#include "navigationssystem.h"

namespace Ui {
class entfernungWindow;
}

class entfernungWindow : public QDialog, protected NavigationsSystem
{
    Q_OBJECT

public:
    explicit entfernungWindow(QWidget *parent = nullptr, std::vector<Ort*> *vector = nullptr);
    ~entfernungWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::entfernungWindow *ui;
    std::vector<Ort*> *ortVector;
};

#endif // ENTFERNUNGWINDOW_H
