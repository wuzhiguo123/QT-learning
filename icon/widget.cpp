#include "widget.h"
#include "ui_widget.h"
#include <QIcon>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QIcon icon(":/mao.jpg");//访问qrc资源时需要用:开始，然后根据qrc的虚拟路径即可。qrc时直接写二进制的，不宜过大
    this->setWindowIcon(icon);

}

Widget::~Widget()
{
    delete ui;
}

