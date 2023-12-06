/********************************************************************************
** Form generated from reading UI file 'results1.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTS1_H
#define UI_RESULTS1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Results1
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Results1)
    {
        if (Results1->objectName().isEmpty())
            Results1->setObjectName(QString::fromUtf8("Results1"));
        Results1->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Results1->setWindowIcon(icon);
        widget = new QWidget(Results1);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 50, 211, 121));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        verticalLayout_2->addLayout(verticalLayout);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        label->raise();
        label->raise();
        label->raise();
        label_2->raise();

        retranslateUi(Results1);

        QMetaObject::connectSlotsByName(Results1);
    } // setupUi

    void retranslateUi(QDialog *Results1)
    {
        Results1->setWindowTitle(QApplication::translate("Results1", "Santa Game", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Results1", "Your score:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Results1: public Ui_Results1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTS1_H
