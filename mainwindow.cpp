#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buttonClickHandler()
{
    this->ui->labelFirstName_2->setText("");
    this->ui->labelLastName_2->setText("");
    this->ui->labelCompanyName_2->setText("");
    this->ui->messagebox->setText("");
}
