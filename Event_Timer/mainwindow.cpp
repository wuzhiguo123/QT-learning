#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timerId = this->startTimer(1000);
    ui->lcdNumber->display(10);
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    if(event->timerId() != this->timerId)
    {
        qDebug() << "########";
        return;
    }
    else
    {
        int val = ui->lcdNumber->intValue();
        if(val <=0)
        {
            this->killTimer(this->timerId);
            return;
        }
        val--;
        ui->lcdNumber->display(val);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

