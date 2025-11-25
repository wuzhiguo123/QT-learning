#include "widget.h"
#include "ui_widget.h"
#include <QButtonGroup>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QButtonGroup* group_buger = new QButtonGroup(this);
    QButtonGroup* group_xiaoshi = new QButtonGroup(this);
    QButtonGroup* group_drink = new QButtonGroup(this);

    group_buger->addButton(ui->buger_1);
    group_buger->addButton(ui->buger_2);
    group_buger->addButton(ui->buger_3);

    group_xiaoshi->addButton(ui->danta);
    group_xiaoshi->addButton(ui->shutiao);
    group_xiaoshi->addButton(ui->guopai);

    group_drink->addButton(ui->cola);
    group_drink->addButton(ui->fenda);
    group_drink->addButton(ui->milk);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_sumit_clicked()
{

}
