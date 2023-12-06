#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include <QLabel>

namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT
    
public:
    explicit Menu(QWidget *parent = 0);
    ~Menu();
    QMovie *movie;
    QLabel *label;
    
private:
    Ui::Menu *ui;

private slots:
    void on_play_clicked();

    void on_exit_clicked();
};

#endif // MENU_H
