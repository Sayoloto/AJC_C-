#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QWidget"
#include <QMainWindow>
#include "myplaintext.h"
#include "QPaintEvent"
#include "mypushbutton.h"

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
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent * event);

private slots:

    void clicking_action();

};

#endif // MAINWINDOW_H
