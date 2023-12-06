/********************************************************************************
** Form generated from reading UI file 'level.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVEL_H
#define UI_LEVEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Level
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *easy;
    QPushButton *hard;

    void setupUi(QDialog *Level)
    {
        if (Level->objectName().isEmpty())
            Level->setObjectName(QString::fromUtf8("Level"));
        Level->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Level->setWindowIcon(icon);

        widget = new QWidget(Level);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 60, 201, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        easy = new QPushButton(widget);
        easy->setObjectName(QString::fromUtf8("easy"));
        easy->setFont(font);

        verticalLayout->addWidget(easy);

        hard = new QPushButton(widget);
        hard->setObjectName(QString::fromUtf8("hard"));
        hard->setFont(font);

        verticalLayout->addWidget(hard);


        retranslateUi(Level);

        QMetaObject::connectSlotsByName(Level);
    } // setupUi

    void retranslateUi(QDialog *Level)
    {
        Level->setWindowTitle(QApplication::translate("Level", "Santa Game", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Level", "Choose the level", 0, QApplication::UnicodeUTF8));
        easy->setText(QApplication::translate("Level", "Easy", 0, QApplication::UnicodeUTF8));
        hard->setText(QApplication::translate("Level", "Hard", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Level: public Ui_Level {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVEL_H
