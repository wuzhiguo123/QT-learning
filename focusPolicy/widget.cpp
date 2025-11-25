#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit->setFocusPolicy(Qt::StrongFocus);//允许tab和点击选中焦点
    ui->lineEdit_2->setFocusPolicy(Qt::ClickFocus);//仅允许点击
    ui->lineEdit_3->setFocusPolicy(Qt::TabFocus);//仅允许tab
}

Widget::~Widget()
{
    delete ui;
}

