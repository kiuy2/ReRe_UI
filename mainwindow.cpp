#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sortation.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Sortation *sortation = new Sortation(ui->centralwidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
