#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenuBar* menubar = new QMenuBar();
    this->setMenuBar(menubar);

    QMenu* parent_menu = new QMenu("父菜单");
    QMenu* child_menu = new QMenu("子菜单");

    menubar->addMenu(parent_menu);//父菜单添加到menubar
    parent_menu->addMenu(child_menu);//子菜单添加到父菜单

    QAction* action1 = new QAction("action1");
    child_menu->addAction(action1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

