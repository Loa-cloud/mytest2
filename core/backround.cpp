#include "backround.h"
#include "widget.h"
#include "player.h"
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QTime>

Backround::Backround(QObject *parent, QGraphicsScene* scene) :
    QObject(parent),QGraphicsPixmapItem()
{
    pix1= scene->addPixmap(QPixmap("back.jpg"));
    pix2= scene->addPixmap(QPixmap("back.jpg"));
    x1 = 0;
    y1 = 0;

    y2 = 0;
    x2 = 3200;//ширина изображения в пикселях
    w = (scene->width());


}

Backround::~Backround()
{
}

void Backround::backMove()
{

    x1=x1-10;
    x2=x2-10;


   if((x1 <= w-6400)&&(x2<=w-3200))
       {
             x1 = w-10;
           return;
       }
      if((x2 <= w-6400)&&(x1 <= w-3200))
       {
             x2 = w-10;
           return;
       }


       pix1->setOffset(x1,y1);
       pix2->setOffset(x2,y2);
}

void Backround::paint(QPainter *, const QStyleOptionGraphicsItem *option,
                QWidget *widget )
{
    r1 = widget->width();
    r2 = widget->height();
    QPainter painter1;
    painter1.begin(widget);
    setPos(mapToParent(-10,0));
    painter1.end();


    Q_UNUSED(option);
    Q_UNUSED(widget);
}

QRectF Backround:: boundingRect(const QPointF, const QPointF) const
{
    QPointF point1(0,0);
    QPointF point2(r1,r2);
    return QRectF(point1,point2);
}

QRectF Backround:: boundingRect() const
{

    return QRectF();
}
