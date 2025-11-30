#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

void Widget::keyPressEvent(QKeyEvent *event)
{
//    qDebug() << event->key();
    if(event->key() == Qt::Key_A && event->modifiers() == Qt::ControlModifier)
    {
        qDebug() << "ctrl+A";
    }
}

Widget::~Widget()
{
    delete ui;
}

