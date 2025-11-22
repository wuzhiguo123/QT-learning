#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pushButton->setText("Hello Wold");
    connect(ui->pushButton,&QPushButton::clicked,this,&Widget::handleclick_ui);
    mybutton = new QPushButton(this);
    mybutton->setText("Hello World");
    connect(mybutton,&QPushButton::clicked,this,&Widget::handleclick_code);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handleclick_code()
{
    qDebug() << "##########";
    if(mybutton->text()==QString("Hello World"))
    {
        mybutton->setText(QString("好得很"));
    }
    else
    {
        mybutton->setText("Hello World");
    }
}
void Widget::handleclick_ui()
{
    if(ui->pushButton->text() == QString("Hello Wold"))
    {
        ui->pushButton->setText(QString("一点也不好"));
    }
    else
    {
        ui->pushButton->setText(QString("Hello Wold"));
    }
}
