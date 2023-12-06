#include "results1.h"
#include "ui_results1.h"

Results1::Results1(QWidget *parent, int points) :
    QDialog(parent),
    ui(new Ui::Results1)
{
    ui->setupUi(this);
    this->setStyleSheet("QDialog {background-image: url(backround.jpg);}");
     QString text = QString::number(points);
    ui->label_2->setText(text);
}

Results1::~Results1()
{
    delete ui;
}
