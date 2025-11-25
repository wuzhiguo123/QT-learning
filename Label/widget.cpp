#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setTextFormat(Qt::PlainText);
    ui->label->setText("纯文本");

    ui->label_2->setTextFormat(Qt::RichText);
    ui->label_2->setText("<b>富文本<b/>");//支持html

    ui->label_3->setTextFormat(Qt::MarkdownText);
    ui->label_3->setText("# markdown");//支持markdown
}

Widget::~Widget()
{
    delete ui;
}

