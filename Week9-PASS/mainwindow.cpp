#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formmenu.h"
#include "formlogin.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), _loginManager{}
{
    ui->setupUi(this);
    QWidget* login = new FormLogin(this, this);
    ui->stackedWidget->addWidget(login);
    ui->stackedWidget->setCurrentWidget(login);
}

MainWindow::~MainWindow()
{
    delete ui;
}

LoginManager MainWindow::loginManager() const
{
    return _loginManager;
}

void MainWindow::changeToMainWindow()
{
    FormMenu *mainMenu = new FormMenu(this, this);

    connect(mainMenu,
            &FormMenu::buttonClicked,
            [&](QWidget *button)
    {
            QMessageBox::warning(this, "Wow", "Nope");
    });
    connect(mainMenu,
            &FormMenu::buttonClicked,
            this,
            &MainWindow::mainMenuButtonClicked);

    ui->stackedWidget->addWidget(mainMenu);
    ui->stackedWidget->setCurrentWidget(mainMenu);
}

void MainWindow::mainMenuButtonClicked(QWidget *button)
{
    QMessageBox::warning(this, "Hey", "Hi there!");
}

