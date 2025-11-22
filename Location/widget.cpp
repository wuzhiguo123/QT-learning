#include "widget.h"
#include "ui_widget.h"
#include <QLabel>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QLabel* label = new QLabel(this);
    label->setText("hello world");
//    label->move(250,250);//每个空间都能用Move移动到指定的位置（坐标系以左上角为(0,0)）
}

Widget::~Widget()
{
    delete ui;
}

