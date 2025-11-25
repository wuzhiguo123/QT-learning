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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QRadioButton *buger_1;
    QRadioButton *buger_2;
    QRadioButton *buger_3;
    QRadioButton *danta;
    QRadioButton *guopai;
    QRadioButton *shutiao;
    QRadioButton *cola;
    QRadioButton *milk;
    QRadioButton *fenda;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        buger_1 = new QRadioButton(Widget);
        buger_1->setObjectName(QString::fromUtf8("buger_1"));
        buger_1->setGeometry(QRect(140, 280, 115, 19));
        buger_2 = new QRadioButton(Widget);
        buger_2->setObjectName(QString::fromUtf8("buger_2"));
        buger_2->setGeometry(QRect(140, 340, 115, 19));
        buger_3 = new QRadioButton(Widget);
        buger_3->setObjectName(QString::fromUtf8("buger_3"));
        buger_3->setGeometry(QRect(140, 390, 115, 19));
        danta = new QRadioButton(Widget);
        danta->setObjectName(QString::fromUtf8("danta"));
        danta->setGeometry(QRect(350, 280, 115, 19));
        guopai = new QRadioButton(Widget);
        guopai->setObjectName(QString::fromUtf8("guopai"));
        guopai->setGeometry(QRect(350, 390, 115, 19));
        shutiao = new QRadioButton(Widget);
        shutiao->setObjectName(QString::fromUtf8("shutiao"));
        shutiao->setGeometry(QRect(350, 340, 115, 19));
        cola = new QRadioButton(Widget);
        cola->setObjectName(QString::fromUtf8("cola"));
        cola->setGeometry(QRect(540, 280, 115, 19));
        milk = new QRadioButton(Widget);
        milk->setObjectName(QString::fromUtf8("milk"));
        milk->setGeometry(QRect(540, 390, 115, 19));
        fenda = new QRadioButton(Widget);
        fenda->setObjectName(QString::fromUtf8("fenda"));
        fenda->setGeometry(QRect(540, 340, 115, 19));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 170, 121, 31));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 230, 41, 31));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(360, 230, 41, 31));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(540, 230, 41, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        buger_1->setText(QCoreApplication::translate("Widget", "\351\272\246\350\276\243\351\270\241\350\205\277\345\240\241", nullptr));
        buger_2->setText(QCoreApplication::translate("Widget", "\345\267\250\346\227\240\351\234\270\347\211\233\345\240\241", nullptr));
        buger_3->setText(QCoreApplication::translate("Widget", "\351\263\225\351\261\274\345\240\241", nullptr));
        danta->setText(QCoreApplication::translate("Widget", "\350\233\213\346\214\236", nullptr));
        guopai->setText(QCoreApplication::translate("Widget", "\346\236\234\346\264\276", nullptr));
        shutiao->setText(QCoreApplication::translate("Widget", "\350\226\257\346\235\241", nullptr));
        cola->setText(QCoreApplication::translate("Widget", "\345\217\257\344\271\220", nullptr));
        milk->setText(QCoreApplication::translate("Widget", "\347\211\233\345\245\266", nullptr));
        fenda->setText(QCoreApplication::translate("Widget", "\350\212\254\350\276\276", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\350\202\257\345\276\267\345\237\272\347\202\271\351\244\220\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\261\211\345\240\241", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\260\217\351\243\237", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\351\245\256\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
