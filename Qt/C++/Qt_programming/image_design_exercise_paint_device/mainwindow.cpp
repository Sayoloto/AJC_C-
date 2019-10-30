#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QPaintDevice"
#include "QPixelFormat"
#include "mainwindow.h"
#include "QColor"
#include "QPainter"
#include "QRect"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    char_afficher();
    char_afficher();
    pix_color_creator();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::char_afficher()
{
    for (int i= 97; i<123; i++)
    {
        char c = (char) i;
        qDebug()<<c;
    }
}

void MainWindow::pix_color_creator()
{
    QRectF r1(0, 150, 0, 150);

    QPixmap *pixmap = new QPixmap(300,300);

    //QPixmap image("fichier.png");
    pixmap->fill(Qt::transparent);
    QPainter *painter= new QPainter(pixmap);


//    // Définition du stylo et de la brosse
  QColor black(Qt::black);
  QColor red(Qt::red);
    QPen pen(black);
    QBrush brush(red);


    // C'est sur le painter qu'on applique une ligne
    painter->setPen(pen);
    painter->setBrush(brush);
    painter->drawText(50,50, "Qt\nProject");
    painter->end();
    // Une fois la painter fermé on sauve le pixmap dans un fichier
    pixmap->save("fichier.png");
}

void MainWindow::color_select()
{

}



