#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include "dialog.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPushButton* button = new QPushButton(this);
    button->move(300,300);
    button->setText("button");
    auto handle = [this]()
    {
        Dialog* dialog = new Dialog(this);
        dialog->resize(300,300);
        dialog->setAttribute(Qt::WA_DeleteOnClose);
    };
    connect(button,&QPushButton::clicked,this,handle);
}

MainWindow::~MainWindow()
{
    delete ui;
}

