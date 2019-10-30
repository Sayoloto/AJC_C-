#include "color_chooser.h"
#include "ui_color_chooser.h"

color_chooser::color_chooser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::color_chooser)
{
    ui->setupUi(this);
}

color_chooser::~color_chooser()
{
    delete ui;
}
