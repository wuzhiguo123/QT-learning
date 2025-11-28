#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //1.创建一个菜单栏
    QMenuBar* menubar = new QMenuBar();
    this->setMenuBar(menubar);

    //2.创建菜单
    QMenu* file = new QMenu("文件(&F)");
    QMenu* edit = new QMenu("编辑(&E)");
    QMenu* about = new QMenu("关于(&A)");
    menubar->addMenu(file);
    menubar->addMenu(edit);
    menubar->addMenu(about);

    //3.给菜单添加菜单项
    QAction* new_file = new QAction("新建(&N)");
    QAction* open = new QAction("打开(&O)");
    QAction* save = new QAction("保存");
    file->addAction(new_file);
    file->addAction(open);
    file->addAction(save);

    //4.给action添加信号槽
    connect(new_file,&QAction::triggered,this,&MainWindow::handleNewFile);
    connect(open,&QAction::triggered,this,&MainWindow::handleOpen);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleNewFile()
{
    qDebug() << "create a new file";
}

void MainWindow::handleOpen()
{
    qDebug() << "open a file";
}

