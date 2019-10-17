#ifndef FORMMENU_H
#define FORMMENU_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class FormMenu;
}

class FormMenu : public QWidget
{
    Q_OBJECT

public:
    explicit FormMenu(QWidget *parent, MainWindow *mainWindow);
    ~FormMenu();

signals:
    void buttonClicked(QWidget *button);

private slots:
    void on_pushButton_clicked();

private:
    Ui::FormMenu *ui;
    MainWindow *_mainWindow;
};

#endif // FORMMENU_H
