/********************************************************************************
** Form generated from reading UI file 'submenu.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBMENU_H
#define UI_SUBMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_subMenu
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *back;
    QPushButton *mainMenu;

    void setupUi(QDialog *subMenu)
    {
        if (subMenu->objectName().isEmpty())
            subMenu->setObjectName(QString::fromUtf8("subMenu"));
        subMenu->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        subMenu->setWindowIcon(icon);
        widget = new QWidget(subMenu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 60, 161, 121));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        back = new QPushButton(widget);
        back->setObjectName(QString::fromUtf8("back"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(16);
        back->setFont(font);

        verticalLayout->addWidget(back);

        mainMenu = new QPushButton(widget);
        mainMenu->setObjectName(QString::fromUtf8("mainMenu"));
        mainMenu->setFont(font);

        verticalLayout->addWidget(mainMenu);

//        //subMenu->setCentralWidget(centralwidget)//(centralwidget);
//        menubar = new QMenuBar(subMenu);
//        menubar->setObjectName(QString::fromUtf8("menubar"));
//        menubar->setGeometry(QRect(0, 0, 400, 21));
//        subMenu->setMenuBar(menubar);
//        statusbar = new QStatusBar(subMenu);
//        statusbar->setObjectName(QString::fromUtf8("statusbar"));
//        subMenu->setStatusBar(statusbar);

        retranslateUi(subMenu);

        QMetaObject::connectSlotsByName(subMenu);
    } // setupUi

    void retranslateUi(QDialog *subMenu)
    {
        subMenu->setWindowTitle(QApplication::translate("subMenu", "Santa Game", 0, QApplication::UnicodeUTF8));
        back->setText(QApplication::translate("subMenu", "Back", 0, QApplication::UnicodeUTF8));
        mainMenu->setText(QApplication::translate("subMenu", "Main Menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class subMenu: public Ui_subMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBMENU_H
