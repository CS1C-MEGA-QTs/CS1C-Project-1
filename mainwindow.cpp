#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBox->addItem("United States");
    ui->comboBox->addItem("United Kingdom");
    ui->comboBox->addItem("Argentina");
    ui->comboBox->addItem("Belgium");
    ui->comboBox->addItem("Canada");
    ui->comboBox->addItem("China");
    ui->comboBox->addItem("Columbia");
    ui->comboBox->addItem("Denmark");
    ui->comboBox->addItem("France");
    ui->comboBox->addItem("Germany");
    ui->comboBox->addItem("India");
    ui->comboBox->addItem("Mexico");
    ui->comboBox->addItem("Russia");

    ui->comboBox_2->addItem("");
    ui->comboBox_2->addItem("AK");
    ui->comboBox_2->addItem("AL");
    ui->comboBox_2->addItem("AR");
    ui->comboBox_2->addItem("AZ");
    ui->comboBox_2->addItem("CA");
    ui->comboBox_2->addItem("CO");
    ui->comboBox_2->addItem("CT");
    ui->comboBox_2->addItem("DE");
    ui->comboBox_2->addItem("FL");
    ui->comboBox_2->addItem("GA");
    ui->comboBox_2->addItem("HI");
    ui->comboBox_2->addItem("IA");
    ui->comboBox_2->addItem("ID");
    ui->comboBox_2->addItem("IL");
    ui->comboBox_2->addItem("IN");
    ui->comboBox_2->addItem("KS");
    ui->comboBox_2->addItem("KY");
    ui->comboBox_2->addItem("LA");
    ui->comboBox_2->addItem("MA");
    ui->comboBox_2->addItem("MD");
    ui->comboBox_2->addItem("ME");
    ui->comboBox_2->addItem("MI");
    ui->comboBox_2->addItem("MN");
    ui->comboBox_2->addItem("MO");
    ui->comboBox_2->addItem("MS");
    ui->comboBox_2->addItem("MT");
    ui->comboBox_2->addItem("NC");
    ui->comboBox_2->addItem("ND");
    ui->comboBox_2->addItem("NE");
    ui->comboBox_2->addItem("NH");
    ui->comboBox_2->addItem("NJ");
    ui->comboBox_2->addItem("NM");
    ui->comboBox_2->addItem("NV");
    ui->comboBox_2->addItem("NY");
    ui->comboBox_2->addItem("OH");
    ui->comboBox_2->addItem("OK");
    ui->comboBox_2->addItem("OR");
    ui->comboBox_2->addItem("PA");
    ui->comboBox_2->addItem("RI");
    ui->comboBox_2->addItem("SC");
    ui->comboBox_2->addItem("SD");
    ui->comboBox_2->addItem("TN");
    ui->comboBox_2->addItem("TX");
    ui->comboBox_2->addItem("UT");
    ui->comboBox_2->addItem("VA");
    ui->comboBox_2->addItem("VT");
    ui->comboBox_2->addItem("WA");
    ui->comboBox_2->addItem("WI");
    ui->comboBox_2->addItem("WV");
    ui->comboBox_2->addItem("WY");

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

void MainWindow::buttonClickHandlerHelp()
{
    this->ui->lineHelpFirstName->setText("");
    this->ui->lineHelpLastName->setText("");
    this->ui->lineHelpAddress->setText("");
    this->ui->lineHelpZipcode->setText("");
    this->ui->lineHelpCity->setText("");
    this->ui->comboBox->clearEditText();
    this->ui->comboBox_2->clearEditText();

}

