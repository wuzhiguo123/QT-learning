#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //方式1
//    QMessageBox* messagebox = new QMessageBox(this);
//    messagebox->setWindowTitle("messagebox");
//    messagebox->setText("这是一个messagebox");
//    messagebox->setIcon(QMessageBox::Critical);
//    messagebox->setStandardButtons(QMessageBox::Ok| QMessageBox::Save | QMessageBox::Cancel);


//    int result = messagebox->exec();//模态

//    if(result == QMessageBox::Ok)
//    {
//        qDebug() << "Ok";
//    }
//    else if(result == QMessageBox::Save)
//    {
//        qDebug() << "Save";
//    }
//    else
//    {
//        qDebug() << "Cancel";
//    }

    //方式2
    int result2 = QMessageBox::warning(this,"windowtitle","Text",QMessageBox::Ok | QMessageBox::Cancel);//用匿名函数
    if(result2 == QMessageBox::Ok)
    {
        qDebug() << "Ok";
    }

    else
    {
        qDebug() << "Cancel";
    }
}
