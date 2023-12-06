#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include "bird.h"
#include "backround.h"

namespace Ui {
class Widget;
}

class Bird;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0, QString name = " ", int lvl = 0);
    ~Widget();
    void stop();

protected:
    bool eventFilter(QObject* pobj, QEvent* pe);

private:
    Ui::Widget *ui;
    QGraphicsScene *scene;
    QVector <Bird*> arr;
   // QVector<Bird*> *arr = new QVector<Bird*>;
    Backround *b;

    QString name;
    int lvl;
    int birdNum;
    QTime *time;

    void levelTimer();
    bool start = 0;
    int points = 0;
    int health = 3;
    int Mx,My;

   void HealthCheck();

QTimer *mainTimer;
QTimer *backTimer;
QTimer *gameTimer;
QTimer *birdTimer;
QTimer *collisionTimer;





private slots:
    void spawn();
    void timer();
    void showTime();
    void score();
    void on_menu_clicked();
    void checkCollision();

signals:
    void Health();

    friend class Bird;
};
#endif // WIDGET_H
