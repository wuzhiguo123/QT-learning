#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    //更多关于font属性可以在里面看一下，其实就是调整字体的风格样式
    ui->setupUi(this);
    ui->sizeup->setToolTip("增加字体大小");
    ui->sizeup->setToolTipDuration(3000);
    ui->sizedown->setToolTip("减小字体大小");
    ui->sizedown->setToolTipDuration(3000);
    ui->blod->setToolTip("黑体");
    ui->blod->setToolTipDuration(3000);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_blod_clicked()
{
   QFont font = ui->label->font();
   font.setBold(!font.bold());
   ui->label->setFont(font);
}

void Widget::on_sizeup_clicked()
{
    QFont font = ui->label->font();
        int size = font.pixelSize();

        if (size == -1) {
            // 如果使用点大小，转换为像素大小
            size = font.pointSize() * 96 / 72;  // 粗略转换
            font.setPixelSize(size + 2);
        } else {
            font.setPixelSize(size + 2);
        }

        ui->label->setFont(font);
}

void Widget::on_sizedown_clicked()
{
    QFont font = ui->label->font();
        int size = font.pixelSize();

        if (size == -1) {
            // 如果使用点大小，转换为像素大小
            size = font.pointSize() * 96 / 72;  // 粗略转换
            font.setPixelSize(size - 2);
        } else {
            font.setPixelSize(size - 2);
        }

        ui->label->setFont(font);
}
