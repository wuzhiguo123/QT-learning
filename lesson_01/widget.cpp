#include "widget.h"
#include "ui_widget.h"
#include <QLabel>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QLabel* label = new QLabel(this);//需要传入this，这样在析构时能自动析构这些widget而无需手动释放。
    //在堆上申请空间，不要再栈上，因为这只是一个构造函数，结束了就释放了。
    label->setText("hello world from code");
}

Widget::~Widget()
{
    delete ui;
}


