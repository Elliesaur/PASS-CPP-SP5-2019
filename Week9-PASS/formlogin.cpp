#include "formlogin.h"
#include "ui_formlogin.h"
#include "mainwindow.h"
#include <QMessageBox>

FormLogin::FormLogin(QWidget *parent, MainWindow *mainWindow) :
    QWidget(parent),
    ui(new Ui::FormLogin), _mainWindow{mainWindow}
{
    ui->setupUi(this);
}

FormLogin::~FormLogin()
{
    delete ui;
}

void FormLogin::on_btnLogin_clicked()
{
    QString username = ui->txtUsername->text();
    QString password = ui->txtPassword->text();

    bool valid = _mainWindow->loginManager().ValidLogin(username, password);
    if (!valid)
    {
        QMessageBox::warning(this, "Invalid Login", "Invalid login, try again!");
    }
    else
    {
        _mainWindow->changeToMainWindow();
    }
}
