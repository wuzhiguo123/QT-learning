#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //1.显示的connect
    //当通过代码实例化一个控件时需要显示的调用connect来将信号和槽函数链接
    button = new QPushButton(this);
    button->setText("Button_1");
    connect(button,&QPushButton::clicked,this,&Widget::handleclick);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handleclick()
{
    if(button->text() == QString("Button_1"))
    {
        button->setText("recive a signal");
    }
}

//2.通过函数名connect（实际上在ui_widget中调用了QMetaObject::connectSlotsByName(Widget)）
//函数的名固定为：on_空间的属性名_信号方式

void Widget::on_button_2_clicked()
{
    if(ui->button_2->text() == QString("Button_2"))
    {
        ui->button_2->setText("recive a signal");
    }
}
