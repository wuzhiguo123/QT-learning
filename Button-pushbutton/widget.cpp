#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //1.为每个button添加icon
    ui->pushButton_target->setIcon(QIcon(":/images/mao.jpg"));
    ui->pushButton_target->setIconSize(QSize(100,100));

    ui->pushButton_up->setIcon(QIcon(":/images/up.png"));
    ui->pushButton_down->setIcon(QIcon(":/images/down.png"));
    ui->pushButton_left->setIcon(QIcon(":/images/left.png"));
    ui->pushButton_right->setIcon(QIcon(":/images/right.png"));
    //2.设置每个icon的size
    ui->pushButton_up->setIconSize(QSize(50,50));
    ui->pushButton_down->setIconSize(QSize(50,50));
    ui->pushButton_left->setIconSize(QSize(50,50));
    ui->pushButton_right->setIconSize(QSize(50,50));

    //3.添加快捷键，注意可以用+来设置组合快捷键如Qt::Key_CTRL+Qt::Key_Up（默认连击）
    ui->pushButton_up->setShortcut(Qt::Key_Up);
    ui->pushButton_down->setShortcut(Qt::Key_Down);
    ui->pushButton_left->setShortcut(Qt::Key_Left);
    ui->pushButton_right->setShortcut(Qt::Key_Right);

    //4.设置鼠标连击
    ui->pushButton_up->setAutoRepeat(true);
    ui->pushButton_down->setAutoRepeat(true);
    ui->pushButton_left->setAutoRepeat(true);
    ui->pushButton_right->setAutoRepeat(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_up_clicked()
{
    QRect rect = ui->pushButton_target->geometry();
    ui->pushButton_target->setGeometry(rect.x(),rect.y()-5,rect.width(),rect.height());
}

void Widget::on_pushButton_down_clicked()
{
    QRect rect = ui->pushButton_target->geometry();
    ui->pushButton_target->setGeometry(rect.x(),rect.y()+5,rect.width(),rect.height());
}

void Widget::on_pushButton_left_clicked()
{
    QRect rect = ui->pushButton_target->geometry();
    ui->pushButton_target->setGeometry(rect.x()-5,rect.y(),rect.width(),rect.height());
}

void Widget::on_pushButton_right_clicked()
{
    QRect rect = ui->pushButton_target->geometry();
    ui->pushButton_target->setGeometry(rect.x()+5,rect.y(),rect.width(),rect.height());
}
