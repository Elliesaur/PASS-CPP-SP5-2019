#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "loginmanager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    LoginManager loginManager() const;
    void changeToMainWindow();

public slots:
    void mainMenuButtonClicked(QWidget *button);

private:
    Ui::MainWindow *ui;
    LoginManager _loginManager;
};

#endif // MAINWINDOW_H
