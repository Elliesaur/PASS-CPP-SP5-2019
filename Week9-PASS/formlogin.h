#ifndef FORMLOGIN_H
#define FORMLOGIN_H

#include <QWidget>
#include "mainwindow.h"
namespace Ui {
class FormLogin;
}

class FormLogin : public QWidget
{
    Q_OBJECT

public:
    explicit FormLogin(QWidget *parent, MainWindow *mainWindow);
    ~FormLogin();

private slots:
    void on_btnLogin_clicked();

private:
    Ui::FormLogin *ui;
    MainWindow *_mainWindow;
};

#endif // FORMLOGIN_H
