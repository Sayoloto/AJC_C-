#include "mainwindow.h"
#include "my_graphics_item.h"
#include "my_graphics_seat_belt.h"
#include "tableau_du_board.h"

#include "ui_mainwindow.h"
#include "QGraphicsItem"
#include "QGraphicsScene"
#include "QGraphicsRectItem"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   scene = new QGraphicsScene (this);
   ui->graphicsView->setScene(scene);
   QBrush redBrush(Qt::red);
   QPen outlinePen(Qt::blue);
   scene->setBackgroundBrush(Qt::white);

   QPixmap new_photo;
   temp_gauge = new my_graphics_item();
   seat_belt = new my_graphics_seat_belt();
   scene->addItem(temp_gauge);
   scene->addItem(seat_belt);
   //temp_gauge->prepareGeometryChange();

}

MainWindow::~MainWindow()
{
    delete ui;
}
