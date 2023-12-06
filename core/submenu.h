#ifndef SUBMENU_H
#define SUBMENU_H

#include <QDialog>

namespace Ui {
class subMenu;
}

class subMenu : public QDialog
{
    Q_OBJECT
    
public:
    explicit subMenu(QWidget *parent = 0);
    ~subMenu();

private:
    Ui::subMenu *ui;

private slots:
    void on_back_clicked();
    void on_mainMenu_clicked();

signals:
    void openDialog();
    void closeWidget();
    void closeDialog();
};


#endif // SUBMENU_H
