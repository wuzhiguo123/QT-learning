#include "label.h"


Label::Label(QWidget *parent):QLabel(parent)
{

}

void Label::mousePressEvent(QMouseEvent *ev)
{
    if(ev->button()==Qt::LeftButton)
    {
        qDebug() << "press leftbutton";
    }
    else if (ev->button() == Qt::RightButton)
    {
        qDebug() << "press rightbutton";
    }
    qDebug() << ev->x() << ',' << ev->y();

}

void Label::mouseReleaseEvent(QMouseEvent *ev)
{
    if(ev->button()==Qt::LeftButton)
    {
        qDebug() << "press leftbutton";
    }
    else if (ev->button() == Qt::RightButton)
    {
        qDebug() << "press rightbutton";
    }
    qDebug() << ev->x() << ',' << ev->y();
}

void Label::mouseDoubleClickEvent(QMouseEvent *event)
{

}

void Label::mouseMoveEvent(QMouseEvent *ev)
{

}
