#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "formlogin.h"

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    FormLogin *login = new FormLogin(this, nullptr);
    ui->stackedWidget->addWidget(login);
    ui->stackedWidget->setCurrentWidget(login);
}

MainWindow2::~MainWindow2()
{
    delete ui;
}
