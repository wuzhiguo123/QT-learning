#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(this,&Widget::mysignal,this,&Widget::myslot);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::myslot(const QString& windowtext)
{
    this->setWindowTitle(windowtext);
}

void Widget::on_pushButton_clicked()
{

    emit mysignal("button 1");
}

void Widget::on_pushButton_2_clicked()
{
    emit mysignal("button 2");
}

