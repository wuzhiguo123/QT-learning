#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void handlesignal();
signals:
    void mysiganl();//自定义信号只需要声明，不需要定义。由QT框架自行处理

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
