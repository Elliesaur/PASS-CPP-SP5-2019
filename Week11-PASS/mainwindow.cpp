#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    auto table = ui->tblMovies;
    table->setRowCount(1);
    table->setItem(0, 0, new QTableWidgetItem("ID"));
    table->setItem(0, 1, new QTableWidgetItem("Name"));
    table->setItem(0, 2, new QTableWidgetItem("Description"));
    table->setItem(0, 3, new QTableWidgetItem("Rating"));

}

MainWindow::~MainWindow()
{
    delete ui;
}
