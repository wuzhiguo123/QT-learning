#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    void handleclick_ui();
    void handleclick_code();
    ~Widget();

private:
    Ui::Widget *ui;
    QPushButton* mybutton;
};
#endif // WIDGET_H
