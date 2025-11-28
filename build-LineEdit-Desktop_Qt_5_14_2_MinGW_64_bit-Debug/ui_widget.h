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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *name;
    QLineEdit *password;
    QLineEdit *phone;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *lable5;
    QRadioButton *male;
    QRadioButton *female;
    QPushButton *sumit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        name = new QLineEdit(Widget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(320, 160, 191, 41));
        password = new QLineEdit(Widget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(320, 240, 191, 41));
        phone = new QLineEdit(Widget);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(320, 400, 191, 41));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 170, 31, 21));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 250, 31, 21));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 330, 31, 21));
        lable5 = new QLabel(Widget);
        lable5->setObjectName(QString::fromUtf8("lable5"));
        lable5->setGeometry(QRect(270, 410, 31, 21));
        male = new QRadioButton(Widget);
        male->setObjectName(QString::fromUtf8("male"));
        male->setGeometry(QRect(330, 330, 115, 19));
        female = new QRadioButton(Widget);
        female->setObjectName(QString::fromUtf8("female"));
        female->setGeometry(QRect(440, 330, 115, 19));
        sumit = new QPushButton(Widget);
        sumit->setObjectName(QString::fromUtf8("sumit"));
        sumit->setGeometry(QRect(510, 480, 93, 28));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\247\223\345\220\215", nullptr));
        lable5->setText(QCoreApplication::translate("Widget", "\347\224\265\350\257\235", nullptr));
        male->setText(QCoreApplication::translate("Widget", "\347\224\267", nullptr));
        female->setText(QCoreApplication::translate("Widget", "\345\245\263", nullptr));
        sumit->setText(QCoreApplication::translate("Widget", "\346\217\220\344\272\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
