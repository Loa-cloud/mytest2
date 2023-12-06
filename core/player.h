#ifndef PLAYER_H
#define PLAYER_H

#include <QDialog>

namespace Ui {
class Player;
}

class Player : public QDialog
{
    Q_OBJECT
    
public:
    explicit Player(QWidget *parent = 0);
    ~Player();
    
private:
    Ui::Player *ui;
    QString name;

signals:
    void openMenu();

private slots:
    void on_back_clicked();

    void on_next_clicked();
};


#endif // PLAYER_H
