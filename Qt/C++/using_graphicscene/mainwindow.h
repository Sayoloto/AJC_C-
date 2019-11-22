#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QGraphicsScene"
#include "QGraphicsItem"
#include "QGraphicsRectItem"

#include "my_graphics_item.h"
#include "my_graphics_seat_belt.h"
#include "tableau_du_board.h"

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
    my_graphics_seat_belt * seat_belt;
};

#endif // MAINWINDOW_H
