#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton* button = new QPushButton(this);
    button-> move(100,100);
    button ->setText("button");
    connect(button,&QPushButton::clicked,this,&Widget::handle);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handle()
{
    qDebug() << "geometry:" << this->geometry();
    qDebug() << "frameGeometry:" << this->frameGeometry();//framewindow是widget外面的一层
}

