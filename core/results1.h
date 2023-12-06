#ifndef RESULTS1_H
#define RESULTS1_H

#include <QDialog>

namespace Ui {
class Results1;
}

class Results1 : public QDialog
{
    Q_OBJECT
    
public:
    explicit Results1(QWidget *parent = 0, int points = 0);
    ~Results1();
    
private:
    Ui::Results1 *ui;
};

#endif // RESULTS1_H
