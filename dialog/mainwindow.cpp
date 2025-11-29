#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QPushButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPushButton* button = new QPushButton(this);
    button->setText("Button");
    button->move(300,300);
    connect(button,&QPushButton::clicked,this,&MainWindow::handle);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handle()
{
    QDialog* dialog = new QDialog(this);
    dialog->resize(300,300);
    dialog->show();
    dialog->setAttribute(Qt::WA_DeleteOnClose);
}

