/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *up;
    QPushButton *left;
    QPushButton *right;
    QPushButton *down;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        up = new QPushButton(Widget);
        up->setObjectName(QString::fromUtf8("up"));
        up->setGeometry(QRect(490, 390, 151, 71));
        left = new QPushButton(Widget);
        left->setObjectName(QString::fromUtf8("left"));
        left->setGeometry(QRect(340, 460, 151, 71));
        right = new QPushButton(Widget);
        right->setObjectName(QString::fromUtf8("right"));
        right->setGeometry(QRect(630, 460, 151, 71));
        down = new QPushButton(Widget);
        down->setObjectName(QString::fromUtf8("down"));
        down->setGeometry(QRect(480, 530, 151, 71));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(351, 320, 101, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        up->setText(QCoreApplication::translate("Widget", "up", nullptr));
        left->setText(QCoreApplication::translate("Widget", "left", nullptr));
        right->setText(QCoreApplication::translate("Widget", "right", nullptr));
        down->setText(QCoreApplication::translate("Widget", "down", nullptr));
        label->setText(QCoreApplication::translate("Widget", "TARGET", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
