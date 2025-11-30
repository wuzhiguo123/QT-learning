#include "pushbutton.h"
#include <QDebug>
PushButton::PushButton(QWidget* parent):QPushButton(parent)
{

}

void PushButton::enterEvent(QEvent* event)
{

    qDebug() << "enter";
    QRect rect = this->geometry();
    this->setGeometry(rect.x(),rect.y()+10,rect.width(),rect.height());
}

void PushButton::leaveEvent(QEvent *event)
{
    qDebug() << "leave";
    QRect rect = this->geometry();
    this->setGeometry(rect.x(),rect.y()-10,rect.width(),rect.height());
}
