#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "thread.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    thread.start();
    auto handle = [this]()
    {
           int val = ui->lcdNumber->intValue();
           if(val <= 0)return;
           else
           {
               val--;
               ui->lcdNumber->display(val);
           }
    };
    connect(&thread,&Thread::notify,this,handle);
}

MainWindow::~MainWindow()
{
    delete ui;
}

