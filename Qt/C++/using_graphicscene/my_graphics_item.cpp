#include "my_graphics_item.h"

my_graphics_item::my_graphics_item()
{

}

QRectF my_graphics_item::boundingRect() const
{
    return QRectF(0,0,100,100);
}



void my_graphics_item::paint( QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
{
    QRectF rect =boundingRect();
}

void my_graphics_item::vitesse_gauge()
{

}


