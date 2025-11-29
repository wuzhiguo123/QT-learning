#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDockWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDockWidget* dockwidget = new QDockWidget();
    this->addDockWidget(Qt::LeftDockWidgetArea,dockwidget);

    dockwidget->setWindowTitle("Dockwidget");

    QWidget* widget = new QWidget();
    dockwidget->setWidget(widget);

    QVBoxLayout* layout = new QVBoxLayout();
    widget->setLayout(layout);

    QPushButton* button = new QPushButton();
    QLabel* label = new QLabel();
    layout->addWidget(button);
    layout->addWidget(label);
    button->setText("文本信息");
    label->setText("按钮");

    dockwidget->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);





}

MainWindow::~MainWindow()
{
    delete ui;
}

