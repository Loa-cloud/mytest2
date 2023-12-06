#ifndef BIRD_H
#define BIRD_H

#include <QObject>
#include <QGraphicsItem>
#include <widget.h>


class Widget;

class Bird : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Bird(QObject *parent, QGraphicsScene* scene);
    ~Bird();

protected:
    QRectF boundingRect() const;

    int x, y;

    QGraphicsPixmapItem *myPic;

public slots:
    void onTimer();

    friend class Widget;

};


#endif BIRD_H

//#ifndef BIRD_H
//#define BIRD_H

//#include <QObject>
//#include <QGraphicsItem>
//#include <widget.h>


//class Widget;

//class Bird : public QObject, public QGraphicsPixmapItem
//{
//    Q_OBJECT
//public:
//    Bird(QObject *parent, QGraphicsScene* scene);
//    ~Bird();

//protected:
//    QRectF boundingRect() const; /// границы птицы
//    void paint(QPainter * paint, const QStyleOptionGraphicsItem *option,
//               QWidget *widget = 0);
//            int x, y;

//    QGraphicsPixmapItem *myPic;


////     int GettingX();
////     int GettingY();

//signals:
//    void destroyed();

//public slots:
//    void onTimer(int k = 0);
//    void BirdDestroy();

//    friend class Widget;

//};


//#endif // BIRD_H
