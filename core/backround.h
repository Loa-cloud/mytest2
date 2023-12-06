#ifndef BACKROUND_H
#define BACKROUND_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsScene>

class Backround : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Backround(QObject *parent, QGraphicsScene* scene);
    ~Backround();

protected:
    QRectF boundingRect() const;
    QRectF boundingRect(const QPointF, const QPointF) const;
    void paint(QPainter * paint, const QStyleOptionGraphicsItem *option,
               QWidget *widget );

private:
    QGraphicsPixmapItem *pix1;
    QGraphicsPixmapItem *pix2;
    qreal x1, y1, x2, y2, w;
    float r1,r2;

signals:

public slots:
    void backMove();

};

#endif // BACKROUND_H
