#include "widget.h"
#include "ui_widget.h"
#include "label.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    Label* label = new Label(this);
    label->setText("1235463");
    label->move(100,100);

}

Widget::~Widget()
{
    delete ui;
}

