#include "player.h"
#include "widget.h"
#include "level.h"
#include "ui_player.h"
#include "menu.h"
#include "ui_menu.h"
#include <QMessageBox>

Player::Player(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Player)
{
    ui->setupUi(this);
    this->setStyleSheet("QDialog {background-image: url(backround.jpg);}");
    this->setFixedSize(this->width(), this->height());
}

Player::~Player()
{
    delete ui;
}


void Player::on_back_clicked()
{
        emit openMenu();
        this->close();
}

void Player::on_next_clicked()
{
    name = ui->lineEdit->text();
    if (name.isEmpty())
    {
        QMessageBox msgBox;
        msgBox.setWindowTitle("Warning!");
        msgBox.setText("Enter the name of a player ");
        msgBox.setIcon(QMessageBox::Warning);
//        QIcon icon;
//        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Normal, QIcon::Off);
//        msgBox.Icon(icon);
        msgBox.setBaseSize(300,100);
        msgBox.exec();
        return;
    }

    Level *l = new Level(0,name);
    l->show();
    this->close();
}
