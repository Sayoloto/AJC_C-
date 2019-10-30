#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QPainter"
#include "QTimer"
#include "QPaintEvent"
#include "QBrush"

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

    int x = 60;
    int y = 80;

    void paintEvent(QPaintEvent *e);
    void mover(int x);
};

#endif // MAINWINDOW_H
