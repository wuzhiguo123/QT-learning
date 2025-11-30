#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //拿到menubar
    QMenuBar* menubar = this->menuBar();
//    this->setMenuBar(menubar);

    //设置菜单
    QMenu* file = new QMenu("File");
    menubar->addMenu(file);

    //添加action
    QAction* open_file = new QAction("OpenFile");
    QAction* save_file = new QAction("SaveFile");
    file->addAction(open_file);
    file->addAction(save_file);

    //为Action设置槽函数
    connect(open_file,&QAction::triggered,this,&MainWindow::OpenFile);
    connect(save_file,&QAction::triggered,this,&MainWindow::SaveFile);

    text_edit = new QPlainTextEdit(this);
    this->setCentralWidget(text_edit);
}

void MainWindow::OpenFile()
{
    //用filedialog拿到文件路径
    QString path = QFileDialog::getOpenFileName(this);

    //将文件路径显示在状态栏
    QStatusBar* statusbar = this->statusBar();
    statusbar->showMessage(path);

    //根据文件路径构造一个Qfile对象
    QFile file(path);

    //读取文件
    if(! file.open(QFile::ReadOnly)) //打开
    {
        statusbar->showMessage(path+"打开失败");
        return;
    }

    QString text = file.readAll();

    //关闭文件
    file.close();
    text_edit->setPlainText(text);

}

void MainWindow::SaveFile()
{
    QString path = QFileDialog::getSaveFileName(this);

    QStatusBar* statusbar = this->statusBar();
    statusbar->showMessage("保存至" + path);

    QFile file(path);
    if(! file.open(QFile::WriteOnly)) //打开
    {
        statusbar->showMessage(path+"打开失败");
        return;
    }
    const QString& text = text_edit->toPlainText();

    file.write(text.toUtf8());
    file.close();

}

MainWindow::~MainWindow()
{
    delete ui;
}

