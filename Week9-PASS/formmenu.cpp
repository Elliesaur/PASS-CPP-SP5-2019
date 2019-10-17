#include "formmenu.h"
#include "ui_formmenu.h"

FormMenu::FormMenu(QWidget *parent, MainWindow *mainWindow) :
    QWidget(parent),
    ui(new Ui::FormMenu), _mainWindow{mainWindow}
{
    ui->setupUi(this);
}

FormMenu::~FormMenu()
{
    delete ui;
}

void FormMenu::on_pushButton_clicked()
{
     emit buttonClicked(ui->pushButton);
}
