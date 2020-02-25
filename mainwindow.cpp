/******************************************************************************
 * PROGRAMMERS: Jonathan Aguirre
 *              Tina     Faraji
 *              Suhyr    Hasan
 *              Weston   Mathews
 * CLASS      : CS1C
 * SECTION    : MW 5:00p - 7:30p
 * DUE DATE   : 02/23/20
 *****************************************************************************/

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{//begin constructor

    ui->setupUi(this);

                    /******************************
                     **** SPECIFIC TO HOME TAB ****
                     ******************************/

    /************************************************************
     * PROCESSING - Assign an image into new QPixmap variable
     ************************************************************/
    QPixmap homePageBackground (":/new/prefix1/Background.jpg");
    QPixmap homePageCornerImage("://King Bob-Omb.png");

    /************************************************************
     * PROCESSING - Set the label to hold the image specified
     ************************************************************/
    ui -> ImageLabel       -> setPixmap(homePageBackground.scaled(1151,651));
    ui -> MEGAQTImageLabel -> setPixmap(homePageCornerImage.scaled(161, 171));

    /************************************************************
     * PROCESSING - Access the label and give values of:
     *              Background = white
     ************************************************************/
    ui -> WelcomeLabel         -> setStyleSheet("QLabel { background-color : white; }");
    ui -> OfficialWebsiteLabel -> setStyleSheet("QLabel { background-color : white; }");

}//end constructor

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

