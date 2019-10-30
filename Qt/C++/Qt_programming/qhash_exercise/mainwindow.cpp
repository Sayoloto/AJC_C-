#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHash>
#include <QComboBox>
#include <QDebug>
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Dialog *top_level = new Dialog(this);
    //top_level ->exec();
    top_level -> show();


    age_gens["Loto"]=12;
    age_gens["Gilles"]=32;
    ui->comboBox->addItems(age_gens.keys());
    connect(ui->comboBox,SIGNAL(currentTextChanged(QString)),this, SLOT(age()));
}


void MainWindow::age()
{
    ui->lineEdit->setText(QString ("%1").arg(age_gens[ui->comboBox->currentText()]));

}


MainWindow::~MainWindow()
{
    delete ui;
}



