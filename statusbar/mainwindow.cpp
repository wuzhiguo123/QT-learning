#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QPushButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStatusBar* statusbar = this->statusBar();
    this->setStatusBar(statusbar);
    QLabel* label = new QLabel(this);
    label->setText("临时消息");
    statusbar->addWidget(label,3);//(控件、显示的时间)
//    statusbar->showMessage("临时消息",3000);
    QPushButton* button = new QPushButton(this);
    button->setText("按钮");
    statusbar->addWidget(button,5);

}

MainWindow::~MainWindow()
{
    delete ui;
}

