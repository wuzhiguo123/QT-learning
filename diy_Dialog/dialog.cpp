#include "dialog.h"
#include <QPushButton>
#include <QLabel>
#include <QBoxLayout>
Dialog::Dialog(QWidget* parent):QDialog(parent)
{
    QPushButton* button = new QPushButton(this);
    button->setText("关闭");
    QLabel* label = new QLabel(this);
    label->setText("文本");
    QVBoxLayout* layout = new QVBoxLayout();
    this->setLayout(layout);
    layout->addWidget(label);
    layout->addWidget(button);
    this->show();

    auto closeDialog = [this](){this->close();};
    connect(button,&QPushButton::clicked,this,closeDialog);
}
