/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGraphicsView *graphicsView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *ShowTime;
    QLabel *label;
    QLabel *Points;
    QSpacerItem *horizontalSpacer;
    QPushButton *menu;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *heart1;
    QLabel *heart2;
    QLabel *heart3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(750, 510);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        graphicsView = new QGraphicsView(Widget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(30, 50, 700, 400));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 701, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ShowTime = new QLCDNumber(layoutWidget);
        ShowTime->setObjectName(QString::fromUtf8("ShowTime"));

        horizontalLayout->addWidget(ShowTime);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(16);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        Points = new QLabel(layoutWidget);
        Points->setObjectName(QString::fromUtf8("Points"));
        Points->setFont(font);

        horizontalLayout->addWidget(Points);

        horizontalSpacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        menu = new QPushButton(layoutWidget);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setFont(font);

        horizontalLayout->addWidget(menu);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 460, 221, 42));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);

        horizontalLayout_3->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        heart1 = new QLabel(layoutWidget1);
        heart1->setObjectName(QString::fromUtf8("heart1"));
        heart1->setPixmap(QPixmap(QString::fromUtf8("heart2.png")));

        horizontalLayout_2->addWidget(heart1);

        heart2 = new QLabel(layoutWidget1);
        heart2->setObjectName(QString::fromUtf8("heart2"));
        heart2->setPixmap(QPixmap(QString::fromUtf8("heart2.png")));

        horizontalLayout_2->addWidget(heart2);

        heart3 = new QLabel(layoutWidget1);
        heart3->setObjectName(QString::fromUtf8("heart3"));
        heart3->setPixmap(QPixmap(QString::fromUtf8("heart2.png")));

        horizontalLayout_2->addWidget(heart3);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Santa Game", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "Points", 0, QApplication::UnicodeUTF8));
        Points->setText(QApplication::translate("Widget", "0", 0, QApplication::UnicodeUTF8));
        menu->setText(QApplication::translate("Widget", "Menu", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "Health", 0, QApplication::UnicodeUTF8));
        heart1->setText(QString());
        heart2->setText(QString());
        heart3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
