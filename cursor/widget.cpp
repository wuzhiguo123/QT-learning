#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //1.使用代码通过QT内置的cursor设置
    QCursor widget_cursor(Qt::OpenHandCursor);
    this->setCursor(widget_cursor);
    //2.使用ui的选项选择QT内置的cursor
    //3.使用代码自定义鼠标样式
    QPushButton* button = new QPushButton(this);
    button->move(100,100);
    QPixmap pixmap(":/mao.jpg");
    pixmap = pixmap.scaled(20,20);
    QCursor button_cursor(pixmap,10,10);//热点位置(10,10)
    button->setCursor(button_cursor);
}

Widget::~Widget()
{
    delete ui;
}

