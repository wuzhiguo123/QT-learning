#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H

#include <QWidget>
#include <QPushButton>
class PushButton : public QPushButton
{
    Q_OBJECT
public:
    PushButton(QWidget* parent);
    void enterEvent(QEvent* event);
    void leaveEvent(QEvent* event);
};

#endif // PUSHBUTTON_H
