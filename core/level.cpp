#include "level.h"
#include "ui_level.h"
#include "widget.h"

Level::Level(QWidget *parent, QString name) :
    QDialog(parent),
    ui(new Ui::Level)
{
    ui->setupUi(this);
    this->setStyleSheet("QDialog {background-image: url(backround.jpg);}");
    this->name = name;
}

Level::~Level()
{
    delete ui;
}

void Level::on_easy_clicked()
{
    lvl = 0;
    Widget *w = new Widget(0, name, lvl);
    w->show();
    this->close();
}

void Level::on_hard_clicked()
{
    lvl = 1;
    Widget *w = new Widget(0, name, lvl);
    w->show();
    this->close();
}
