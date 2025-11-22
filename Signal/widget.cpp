#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(this,&Widget::mysiganl,this,&Widget::handlesignal);
    int i=100;
    while(i--){}
    emit mysiganl();

}

Widget::~Widget()
{
    delete ui;
}

void Widget::handlesignal()
{
   qDebug() << "my signal has been called";
    this->setWindowTitle("大帅哥");
}

