#include "widget.h"
#include "ui_widget.h"
#include <QLabel>
#include <QDebug>
#include <QResizeEvent>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    label = new QLabel(this);
    QRect rect = this->geometry();
    label->setGeometry(0,0,rect.width(),rect.height());

    QPixmap pixmap(":/mao.jpg");
    label->setPixmap(pixmap);
    label->setScaledContents(true);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::resizeEvent(QResizeEvent *event)
{
    qDebug() << event->size();
    label->setGeometry(0,0,event->size().width(),event->size().height());

}
