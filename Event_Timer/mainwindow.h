#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QTimerEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void timerEvent(QTimerEvent* event) override;
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int timerId;
};
#endif // MAINWINDOW_H
