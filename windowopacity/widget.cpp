#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    float opacity = this->windowOpacity();
    qDebug() << opacity;
    if(opacity >= 1.0) return;//浮点数储存，精度不够只能用比较判断
    else
    {
        opacity+=0.1;
        this->setWindowOpacity(opacity);
    }

}

void Widget::on_pushButton_2_clicked()
{
    float opacity = this->windowOpacity();
    qDebug() << opacity;
    if(opacity <= 0) return;
    else
    {
        opacity-=0.1;
        this->setWindowOpacity(opacity);
    }
}
