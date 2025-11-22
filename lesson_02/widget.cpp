#include "widget.h"
#include "ui_widget.h"
#include "mylabel.h"
#include "QDebug"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    MyLabel* label = new MyLabel(this);
    label->setText("hello world");
    ui->setupUi(this);

    // 验证父子关系
    qDebug() << "Label's parent:" << label->parent();           // 应该输出 Widget 的地址
    qDebug() << "Widget's children:" << this->children().count();       // 应该包含 label 的地址

    // 验证对象名称（可选）
    label->setObjectName("myLabel");
    qDebug() << "Label object name:" << label->objectName();
}
Widget::~Widget()
{
    delete ui;
}

