#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&Widget::handle);
    timer->start(1000);

    ui->lcdNumber->display(10);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handle()
{
    int val = ui->lcdNumber->intValue();
    if(val <= 0)
    {
        timer->stop();
        return;
    }
    ui->lcdNumber->display(val-1);
}

