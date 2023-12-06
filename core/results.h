#ifndef RESULTS_H
#define RESULTS_H

#include <QDialog>

namespace Ui {
class Results;
}

class Results : public QDialog
{
    Q_OBJECT
public:
    explicit Results(QWidget *parent = 0, int score = 0);

    
signals:
    
public slots:
    
};

#endif // RESULTS_H



