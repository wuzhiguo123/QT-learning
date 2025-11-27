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
    timer->start(100);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handle()
{
    int val = ui->progressBar->value();
    if(val >= 100)
    {
        timer->stop();
        qDebug() << "加载完成";
        return;
    }
    ui->progressBar->setValue(val+1);
}

