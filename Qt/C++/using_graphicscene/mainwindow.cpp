#include "mainwindow.h"
#include "my_graphics_item.h"
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
   scene->setBackgroundBrush(Qt::blue);

   //rectangle = scene->addRect(100,0,80,100,outlinePen,redBrush);
   //text = scene->addText("Tu es ou dans ta vie", QFont("Helvetical", 14));

   QPixmap new_photo;
   temp_gauge = new my_graphics_item();
   scene->addItem(temp_gauge);
   //temp_gauge->prepareGeometryChange();



}

MainWindow::~MainWindow()
{
    delete ui;
}
