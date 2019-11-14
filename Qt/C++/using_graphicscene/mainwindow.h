#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QGraphicsScene"
#include "QGraphicsItem"
#include "QGraphicsRectItem"
#include "my_graphics_item.h"

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
    QGraphicsScene *scene;
    QGraphicsRectItem * rectangle;
    QGraphicsTextItem * text;
    my_graphics_item * temp_gauge;
};

#endif // MAINWINDOW_H
