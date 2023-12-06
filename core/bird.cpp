#include "bird.h"
#include "player.h"
#include "player.cpp"
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QTime>
#include "math.h"


Bird::Bird(QObject *parent, QGraphicsScene* scene) :
    QObject(parent), QGraphicsPixmapItem()
{
    setFlags(QGraphicsPixmapItem::ItemIsSelectable);
    x = 600;
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));//количество секунд от данного времени до начального
    int t = 300;
    int q = pow(qrand(),2);
    y = q %t + 20;//от 0 до t

    myPic = scene->addPixmap(QPixmap( "bird.gif" ) );
    myPic->setOffset (x,y);

}

QRectF Bird::boundingRect() const
{
//    return QRectF(x,y,r,r);
}

Bird::~Bird()
{
    delete myPic;
}

void Bird::onTimer()
{
        x = x-2;
        myPic->setOffset(x,y);
}

//Bird::Bird(QObject *parent, QGraphicsScene* scene) :
//    QObject(parent), QGraphicsPixmapItem()
//{
//    setFlags(QGraphicsPixmapItem::ItemIsSelectable);
//    x = 600;
//    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));//количество секунд от данного времени до начального
//    int t = 300;
//    y = qrand()%(t)+ 20;//от 0 до t

////    QGraphicsPixmapItem* item = scene->addPixmap(QPixmap( "C:\\bird.gif" ) );
////    setOffset (x,y);

//    myPic = scene->addPixmap(QPixmap( "C:\\bird.gif" ) );
//        myPic->setOffset (x,y);

////        Widget *widget = widg;
////        int Mx1 = widget->getX();//не идет считывание координат мыши
////        QString text(QString::number(Mx1));
////        widget->ui->label->setText(text);

////        int Mx1 = widget->getX();//не идет считывание координат мыши
////        QString text(QString::number(Mx1));
////        widget->ui->label->setText(text);



////            setPixmap( QPixmap( "C:\\backround.jpg" ) );
////            scene->addItem( this );
////            QTimer *timer = new QTimer(this);
////            connect(timer, SIGNAL(timeout()), this, SLOT(myPicFallDown()));
////            timer->start(1000);

//}

//QRectF Bird::boundingRect() const
//{
////    return QRectF(x,y,r,r);
//}

//Bird::~Bird()
//{
//    delete myPic;
//}

//void Bird::paint(QPainter *paint,
//                 const QStyleOptionGraphicsItem *option,
//                 QWidget *widget){

////    if (this->pos().y() >= (497 - r)) delete this;
////    paint->setBrush(QBrush(Qt::red, Qt::SolidPattern));
////    paint->setPen(Qt::red);
////    paint->drawEllipse(x, y, r, r);
//    Q_UNUSED(option);
//    Q_UNUSED(widget);
//}

////void bird::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
////{
////    Q_UNUSED(event);
////    QPoint point(x,y);
////    if (event->pos().x() == 10)
//////    if (x == 100)
////    {//emit destroyed();
////    delete this;}
////}



////if (mazeItems[i].getPosition() == pos)

//void Bird::onTimer(int c)
//{


//        if(c == 0) x = x-2;
//        if(c == 1) x = x-10;
//        myPic->setOffset(x,y);
////                int Mx1 = widget->getX();//не идет считывание координат мыши
////                QString text(QString::number(Mx1));
////                widget->ui->label->setText(text);

////        if (x == 400)
////        {
////            QMessageBox msgBox;
////            msgBox.setWindowTitle("Warning!");
////            msgBox.setText("Enter the name of a player ");
////            msgBox.setStyleSheet("QMessageBox {background-image: url(C:/Users/Desktop/qt_docs/game/backM.png);}"
////                                 "QLabel { color: rgb(0, 0, 0); font-weight: bold; /*text-align: center;*/}");
////            msgBox.setBaseSize(300,100);

////            msgBox.exec();};

////        if (x == 300)
////        {//emit destroyed();
////        delete this;}
//}

////int Bird::GettingX()
////{
////    int x = 3;
////    QString text(QString::number(x));
////            QMessageBox msgBox;
////            msgBox.setWindowTitle("Warning!");
////            msgBox.setText(text);
////            msgBox.setStyleSheet("QMessageBox {background-image: url(C:/Users/Desktop/qt_docs/game/backM.png);}"
////                                 "QLabel { color: rgb(0, 0, 0); font-weight: bold; /*text-align: center;*/}");
////            msgBox.setBaseSize(300,100);

////            msgBox.exec();
////    return x;
////}

////int Bird::GettingY()
////{
////    int y =3;// widget->My;
////    return y;
////}


//void Bird::BirdDestroy()
//{
////    int Mx1 = GettingX();//не идет считывание координат мыши
////    int My1 = GettingY();
////    QString text(QString::number(Mx1));
////    widget->ui->label->setText(text);

////    int Mx1 = widget->getX();//не идет считывание координат мыши
////    QString text(QString::number(Mx1));
////    widget->ui->label->setText(text);



//   // if ((Mx1 <= x+10)&&(Mx1 >= x-10)&&(My1 <= y+10)&&(My1 >= y-10 ))
////        if (Mx1 == x)
////    {
////        QMessageBox msgBox;
////        msgBox.setWindowTitle("Warning!");
////        msgBox.setText("Enter the name of a player ");
////        msgBox.setStyleSheet("QMessageBox {background-image: url(C:/Users/Desktop/qt_docs/game/backM.png);}"
////                             "QLabel { color: rgb(0, 0, 0); font-weight: bold; /*text-align: center;*/}");
////        msgBox.setBaseSize(300,100);

////        msgBox.exec();
////    }

////    if (Mx1 ==100)
////    {
////                QMessageBox msgBox;
////                msgBox.setWindowTitle("Warning!");
////                msgBox.setText("Enter the name of a player ");
////                msgBox.setStyleSheet("QMessageBox {background-image: url(C:/Users/Desktop/qt_docs/game/backM.png);}"
////                                     "QLabel { color: rgb(0, 0, 0); font-weight: bold; /*text-align: center;*/}");
////                msgBox.setBaseSize(300,100);

////                msgBox.exec();};


////    if (x==500)
////    {
////        QMessageBox msgBox;
////        msgBox.setWindowTitle("Warning!");
////        msgBox.setText("Enter the name of a player ");
////        msgBox.setStyleSheet("QMessageBox {background-image: url(C:/Users/Desktop/qt_docs/game/backM.png);}"
////                             "QLabel { color: rgb(0, 0, 0); font-weight: bold; /*text-align: center;*/}");
////        msgBox.setBaseSize(300,100);

////        msgBox.exec();};
//}

