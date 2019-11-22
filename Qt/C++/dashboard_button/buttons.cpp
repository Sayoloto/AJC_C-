#include "buttons.h"
#include <QPainter>

Buttons::Buttons()
{
    lights = false;
    displayOnColor=Qt::green;
    displayOffColor=Qt::red;
    displayOnPattern = Qt::SolidPattern;
    displayOffPattern = Qt::SolidPattern;
}

void Buttons::setState(bool state)
{
    lights = state;
}

void Buttons::setOnColor(QColor onColor)
{
    displayOnColor=onColor;
    update();
}

void Buttons::setOffColor(QColor offColor)
{
    displayOffColor=offColor;
    update();
}

void Buttons::paintEvent(QPaintEvent *)
{
    QPainter p;
    if (lights)
    {
        p.setBrush(QBrush(displayOnColor, displayOnPattern));
    }
    else
    {
        p.setBrush(QBrush(displayOffColor, displayOffPattern));
    };

    p.drawEllipse(0,0,10,10);
}


