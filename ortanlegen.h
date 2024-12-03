#ifndef ORTANLEGEN_H
#define ORTANLEGEN_H

#include <QDialog>
#include "navigationssystem.h"  // Assuming this is your class for navigation system

using namespace std;

namespace Ui {
class ortAnlegen;
}

class ortAnlegen : public QDialog , protected NavigationsSystem
{
    Q_OBJECT

public:
    explicit ortAnlegen(QWidget *parent = nullptr, std::vector<Ort*> *vector = nullptr);
    ~ortAnlegen();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ortAnlegen *ui;
    bool isAdresse = false;
    std::vector<Ort*> *ortVector;  // Pointer to ortVector

};

#endif // ORTANLEGEN_H
