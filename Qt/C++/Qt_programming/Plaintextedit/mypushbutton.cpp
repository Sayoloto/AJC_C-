#include "mypushbutton.h"
#include "QPushButton"
#include "QDebug"


mypushbutton::mypushbutton(QWidget *parent):QPushButton(parent)
{

}

void mypushbutton::mouseDoubleClickEvent(QMouseEvent *event)
{
        emit clicking();

}

