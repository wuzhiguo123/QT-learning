#include "mylabel.h"
#include "widget.h"
#include <QDebug>
MyLabel::MyLabel(QWidget* parent):QLabel(parent)
{

}

MyLabel::~MyLabel()
{
    qDebug() << "Deconstructor has been called !";
}
