#ifndef ORTANLEGENWINDOW_H
#define ORTANLEGENWINDOW_H

#include <QWidget>

// Forward declaration of the Ui::ortAnlegenWindow class
namespace Ui {
class ortAnlegenWindow;  // This is the type that will be generated by Qt from the .ui file
}

class ortAnlegenWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ortAnlegenWindow(QWidget *parent = nullptr);
    ~ortAnlegenWindow();

private:
    Ui::ortAnlegenWindow *ui;  // Pointer to the generated UI class (not ortAnlegenWindow)
};

#endif // ORTANLEGENWINDOW_H