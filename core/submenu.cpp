#include "submenu.h"
#include "ui_submenu.h"
#include "menu.h"
#include "widget.h"

subMenu::subMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::subMenu)
{
    ui->setupUi(this);
     this->setStyleSheet("QDialog {background-image: url(backround.jpg);}");
    this->setFixedSize(this->width(), this->height());
    connect(this, SIGNAL(closeWidget()), parent, SLOT(close()));
    connect(this, SIGNAL(closeDialog()), parent, SLOT(timer()));
}

subMenu::~subMenu()
{
    emit closeDialog();
    delete ui;
}

void subMenu::on_back_clicked()
{
    emit closeDialog();
    this->close();
}

void subMenu::on_mainMenu_clicked()
{
    Menu *m = new Menu(0);
    m->show();
    emit closeWidget();
    this->close();
}
