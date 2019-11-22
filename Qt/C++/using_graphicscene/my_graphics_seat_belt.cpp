#include "my_graphics_seat_belt.h"

my_graphics_seat_belt::my_graphics_seat_belt()
{

}

QRectF my_graphics_seat_belt::boundingRect() const
{
    qreal penWidth = 1;
    return QRectF(-10 - penWidth / 2, -10 - penWidth / 2,
                  20 + penWidth, 20 + penWidth);
}

void my_graphics_seat_belt::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawRoundedRect(-10, -10, 20, 20, 5, 5);
}
