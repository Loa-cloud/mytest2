#include "menu.h"
#include "player.h"
#include "ui_menu.h"
#include <QMovie>
#include <QLabel>
#include <iostream>

Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
    this->setStyleSheet("QDialog {background-image: url(backround.png);}");

    label = new QLabel(this);
    movie = new QMovie( "snow.gif" );
    label->setMovie( movie ); // label имеет тип QLabel*
    label->resize(this->width(),this->height());
    label->show();
    movie->start();

}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_play_clicked()
{
    Player *m = new Player(0);
    connect(m, SIGNAL(openMenu()),SLOT(show()));
    m->show();
    this->close();
}

void Menu::on_exit_clicked()
{
        this->close();
}
