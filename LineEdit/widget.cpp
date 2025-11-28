#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->name->setPlaceholderText("Please input name");
    ui->name->setClearButtonEnabled(true);

    ui->password->setPlaceholderText("Please input password");
    ui->password->setEchoMode(QLineEdit::Password);
    ui->password->setClearButtonEnabled(true);

    group = new QButtonGroup(this);
    group->addButton(ui->male);
    group->addButton(ui->female);

    ui->phone->setPlaceholderText("Please input phone number");
    ui->phone->setInputMask("000-0000-0000");
    ui->phone->setClearButtonEnabled(true);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_sumit_clicked()
{
    if(group->checkedButton())
    {
       qDebug() << ui->name->text() << ui->password->text() << ui->phone->text() << group->checkedButton()->text();
    }
}
