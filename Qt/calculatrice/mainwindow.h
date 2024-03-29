#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <buttons.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void checked_value();
    void addditions();
    void substractions();
};

#endif // MAINWINDOW_H
