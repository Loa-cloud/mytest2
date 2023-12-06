#include "widget.h"
#include "ui_widget.h"
#include "backround.h"
#include "submenu.h"
#include "results1.h"
#include "ui_results1.h"

#include <QTimer>
#include <QMessageBox>
#include <QPainter>
#include <QGraphicsTextItem>
#include <QTime>
#include <QStyleOption>
#include <QFile>
#include <QMouseEvent>
#include <QGraphicsSceneMouseEvent>
#include <QTextStream>

#include <QMap>
#include <QVector>
#include <QString>

Widget::Widget(QWidget *parent, QString name, int lvl) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
    this->name = name;
    this->lvl = lvl;

    scene = new QGraphicsScene;
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QPixmap cur("146294561_ded_moroz_i_olen.gif");
    QCursor cursor(cur, cur.width()/2,cur.height()/2);
    ui->graphicsView->setCursor(cursor);

    Backround *b = new Backround(0, scene);

    mainTimer = new QTimer(this);//time
    backTimer = new QTimer(this);//time
    gameTimer = new QTimer(this); ///spawn
    birdTimer = new QTimer(this); ///move
    collisionTimer = new QTimer(this); ///move

    connect(mainTimer, SIGNAL(timeout()),SLOT(showTime()));
    connect(backTimer, SIGNAL(timeout()), b ,SLOT(backMove()));//для фона
    connect(gameTimer, SIGNAL(timeout()),SLOT(spawn()));//для создания птиц
    connect(mainTimer, SIGNAL(timeout()),SLOT(score()));
    connect(collisionTimer, SIGNAL(timeout()),SLOT(checkCollision()));

    qApp->installEventFilter(this);

    levelTimer();

}

Widget::~Widget()
{
    delete ui;
}

void Widget:: levelTimer()
{
        time = new QTime(0, 0, 1);//для вывода времени
        mainTimer->start(1000);//каждую секунду
        backTimer->start(20);//движение фона
        collisionTimer->start(5);

        if(lvl == 0){
        gameTimer->start(2000);//для создания птиц
        birdTimer->start(3);//скорость птиц
        }
        if(lvl == 1){
        gameTimer->start(1000);
        birdTimer->start(3);
        }
}


void Widget::on_menu_clicked()
{

            subMenu *s = new subMenu(this);
            mainTimer->stop();
            gameTimer->stop();
            birdTimer->stop();
            backTimer->stop();
            s->exec();
}

bool Widget::eventFilter(QObject* pobj, QEvent* pe)
{

 if (pe->type() == QEvent::MouseMove) {
     if (static_cast<QMouseEvent*>(pe)->x() == 0) {//0-позиция на qgraphicsScene
 return true;
 }
     Mx = static_cast<QMouseEvent*>(pe)->x();
     My = static_cast<QMouseEvent*>(pe)->y();
 }
 return false;
}

void Widget::checkCollision()
{
    //QObject::disconnect(gameTimer, SIGNAL(timeout()), this, SLOT(spawn()));
    if (arr.empty()) return;//true если пуст
    for (int i = 0; i < birdNum; i++)
    {
        int x1 = arr[i]->x;
        int y1 = arr[i]->y;
        if ((Mx <= x1+40)&&(Mx >= x1)&&(My <= y1+40)&&(My >= y1))
        {
            HealthCheck();
            arr[i]->~Bird();
            arr.remove(i);
            birdNum--;
        }
    }
    //QObject::connect(gameTimer, SIGNAL(timeout()),this, SLOT(spawn()));
}


void Widget::HealthCheck()
{
    health--;
    if (health ==2) {ui->heart3->hide();}
    if (health ==1) {ui->heart2->hide();}
    if (health ==0) {ui->heart1->hide(); stop();}
}


void Widget::spawn()
{
    //disconnect(collisionTimer, SIGNAL(timeout()),this,SLOT(checkCollision()));
    Bird *temp = new Bird(0, scene);
    temp->setPos(50,50);
    arr.push_back(temp);
    birdNum++;
    connect(birdTimer, SIGNAL(timeout()), temp, SLOT(onTimer()));
    //connect(collisionTimer, SIGNAL(timeout()),this, SLOT(checkCollision()));

}

void Widget::timer()//связан с классом subMenu
{

            if(lvl==0)
            {
                mainTimer->start(1000);
                backTimer->start(20);
                gameTimer->start(2000);
                birdTimer->start(4);
                collisionTimer->start(10);
            }
            if(lvl==1)
            {
                mainTimer->start(1000);
                backTimer->start(20);
                gameTimer->start(1000);
                birdTimer->start(2);
                collisionTimer->start(10);
            }

}


void Widget::showTime()
{
    *time = time->addSecs(1);
    QString text = time->toString("mm:ss");
    ui->ShowTime->display(text);
    if(*time == QTime(0,0,0)) this->stop();
}


void Widget::score()
{
    points += 10;
    QString text = QString::number(points);
    ui->Points->setText(text);
}

void Widget::stop()
{

     mainTimer->stop();
     gameTimer->stop();
     birdTimer->stop();



     this->close();

     QFile file("results.txt");
     if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
     return;
     QTextStream t(&file);
     t << "\n" << name << ": " << QString::number(points);
     file.close();

     Results1 *r = new Results1(0, points);
     r->show();

}



//void Widget::stop()
//{
//    mainTimer->stop();
//    gameTimer->stop();
//    birdTimer->stop();

//    this->close();

//    QMap < int, QString > pairs;
//    QMap< int, QString>:: iterator iter;


//     QFile file("results.txt");
//     if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
//     return;
//     QTextStream text(&file);
//     text << QString::number(points) << " :" << name<<"\n"  ;
//     points = 0;
//     file.close();

//     QStringList list;
//     QStringList points;
//     QStringList names;

//     while(!text.atEnd()){
//     QString str = text.readLine();
//     list = str.split(QRegExp(":"));
//     points = list[0].simplified();//.split(QRegExp(" ")).toInt();
//     names = list[1].simplified();//.split(QRegExp(" "));
//     pairs.insert(points.toInt(), names);

//     list.clear();
//     points.clear();
//     }
//     if (!file.open(QFile::WriteOnly|QFile::Truncate))
//     return;
//     QTextStream text1(&file);
//     for (iter = pairs.begin(); iter != pairs.end(); ++iter )

//     //text1 << iter.value.toStdString<<" : "<< iter.value.toStdString();

//}

//bool Widget::eventFilter(QObject* pobj, QEvent* pe)
//{

// if (pe->type() == QEvent::MouseMove) {
//     if (static_cast<QMouseEvent*>(pe)->x() == 0) {//0-позиция на qgraphicsScene
//     return true;
// }
//     Mx = static_cast<QMouseEvent*>(pe)->x();
//     My = static_cast<QMouseEvent*>(pe)->y();

//     for (int i = 0; i < birdNum; i++)
//     {
//         int x1 = arr[i]->x;
//         int y1 = arr[i]->y;
//         if ((Mx <= x1+40)&&(Mx >= x1)&&(My <= y1+40)&&(My >= y1))
//         {
//             HealthCheck();
//             arr[i]->~Bird();
//             arr.remove(i);
//             birdNum--;
//         }
//     };


//////     x = (int)((ui->graphicsView->mapToGlobal(QPoint(Mx, My))).x());
//////     y = (ui->graphicsView->mapToGlobal(QPoint(Mx, My))).y();
////     if (Mx < 80)
////     QCursor::setPos(mapToGlobal(QPoint(80, My)));
////     else if (Mx > 100)
////         QCursor::setPos(mapToGlobal(QPoint(100, My)));



////     if (My <= 20)
////         QCursor::setPos(mapToGlobal(QPoint(50, 20)));
////     else if (My >= 400)
////         QCursor::setPos(mapToGlobal(QPoint(50, 400)));

// }
// return false;
//}

//// void Widget::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
////{

////    x = QWidget::mapFromGlobal(QCursor::pos()) .x();
////    y = QWidget::mapFromGlobal(QCursor::pos()).y();
////    x = (QGraphicsSceneMouseEvent::pos(event)).x();
////    y = (QGraphicsSceneMouseEvent::pos(event).y();//надо сделать все в фильтре событий
////    if (x < 0)
////    QCursor::setPos(30, y);
////    else if (x > 30)
////        QCursor::setPos(30, y);

////    if (y < 0)
////        QCursor::setPos(30, 0);
////    else if (y > 450)
////        QCursor::setPos(30, 450);

////    if (x < 0)
////        QCursor::setPos(QWidget::mapToGlobal(QPoint(30, y)));
////    else if (x > 30)
////        QCursor::setPos(QWidget::mapToGlobal(QPoint(30, y)));
////    if (y < 0)
////        QCursor::setPos(QWidget::mapToGlobal(QPoint(30, 0)));
////    else if (y > 450)
////        QCursor::setPos(QWidget::mapToGlobal(QPoint(30, 450)));
////}

//void Widget::HealthCheck()
//{
//    health--;
//    if (health == 2) {ui->heart3->hide();}
//    if (health == 1) {ui->heart2->hide();}
//    if (health == 0) {ui->heart1->hide(); stop();}
//}


