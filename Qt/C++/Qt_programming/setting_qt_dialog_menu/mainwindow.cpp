#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "font_selector.h"
#include "QFont"
#include "QSettings"
#include "QDebug"
#include "QDialog"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionChoose_Font, SIGNAL(triggered(bool)), this, SLOT(dialog_window()));
    font_changer();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dialog_window()
{
    //Font_Selector h(this);
    //h.exec();


    Font_Selector *fs = new Font_Selector(this);
    connect(fs,SIGNAL(ChangeFont(QFont)),this,SLOT(Save(QFont)));
    fs->show();


}

void MainWindow::font_changer()
{
     QSettings settings;
     QString sText = settings.value("font/type").toString();
     //qDebug()<<sText;
     int value_font = settings.value("font/size").toInt();
     //qDebug()<<value_font;

     QFont newfont;
     newfont.setFamily(sText);
     newfont.setPointSize(value_font);
     ui->label->setFont(newfont);

}
