#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //分支提交
    //我是分支，第二次提交
}

MainWindow::~MainWindow()
{
    delete ui;
}
