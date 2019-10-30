#include "font_selector.h"
#include "ui_font_selector.h"
#include "QSettings"
#include "QDebug"
#include "mainwindow.h"
Font_Selector::Font_Selector(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Font_Selector)
{
    ui->setupUi(this);

    // Update the previous fonts
    //update_fonts();

    connect (ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(Save()));
    connect (ui->fontComboBox,SIGNAL(currentTextChanged(QString)),this,SLOT(DisplayText()));
    connect (ui->spinBox,SIGNAL(valueChanged(int)),this,SLOT(DisplayText()));
    //QSettings settings;

}

Font_Selector::~Font_Selector()
{
    delete ui;
}


void Font_Selector::DisplayText()
{   QFont f;
    f  = ui->fontComboBox->currentFont();
    int font_value;
    font_value = ui->spinBox->value();
    f.setPointSize(font_value);
    ui->label->setFont(f);


}

void Font_Selector::Save()
{
    QSettings settings;
    QFont f;
    f  = ui->fontComboBox->currentFont();
    f.setPointSize(ui->spinBox->value());
    int font_value;
    font_value = ui->spinBox->value();
    settings.setValue("font/type",f.family());
    settings.setValue("font/size",font_value);
    emit ChangeFont(f);
}

void Font_Selector::update_fonts()
{
    QSettings settings;
    QString sText = settings.value("font/type").toString();
    int value_font = settings.value("font/size").toInt();
    QFont newfont;
    newfont.setFamily(sText);
    newfont.setPointSize(value_font);
    ui->fontComboBox->setCurrentFont(newfont);
    ui->spinBox->setValue(value_font);
}


