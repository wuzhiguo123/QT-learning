#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QToolBar>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenuBar* menubar = this->menuBar();
    this->setMenuBar(menubar);
    //创建Menubar并添加一些menu
    QMenu* file = new QMenu("File");//主Menu只能展示文字或图片，子Menu和Action不受限制
    QMenu* about = new QMenu("About");
    menubar->addMenu(file);
    menubar->addMenu(about);

    //创建Toolbar
    QToolBar* toolbar = new QToolBar();
    this->addToolBar(Qt::LeftToolBarArea,toolbar);//注意是add也就是说可以创建多个toolbar
    toolbar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);//允许停靠的位置（上下左右）
    toolbar->setFloatable(false);//是否允许在窗口中间停靠
//    toolbar->setMovable(false);//是否允许移动

    //创建一个Action
    QAction* open_file = new QAction("OpenFile");
    QIcon file_icon(":/action/file.png");
    open_file->setIcon(file_icon);
    toolbar->addAction(open_file);//添加到toolbar，只能显示图片或文字
    file->addAction(open_file);//添加到菜单，可以显示图片和文字
}

MainWindow::~MainWindow()
{
    delete ui;
}

