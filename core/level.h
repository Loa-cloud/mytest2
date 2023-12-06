#ifndef LEVEL_H
#define LEVEL_H

#include <QDialog>

namespace Ui {
class Level;
}

class Level : public QDialog
{
    Q_OBJECT
    
public:
    explicit Level(QWidget *parent = 0, QString name = " ");
    ~Level();
    
private slots:
    void on_easy_clicked();

    void on_hard_clicked();

private:
    Ui::Level *ui;
    int lvl;
    QString name;
};

#endif // LEVEL_H
