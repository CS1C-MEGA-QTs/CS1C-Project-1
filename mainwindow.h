/******************************************************************************
 * PROGRAMMERS: - Jonathan Aguirre
 *              - Tina     Faraji
 *              - Suhyr    Hasan
 *              - Weston   Mathews
 * CLASS      : CS1C
 * SECTION    : MW 5:00p - 7:30p
 * DUE DATE   : 02/23/20
 *****************************************************************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QPixmap>
#include "admin.h"
#include "checkout.h"
#include "shoppingcartwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:

    /************************************************************
    * buttonClickHandler()
    * ----------------------------------------------------------
    * Erases data entered into the customer service page.
    ************************************************************/
    void buttonClickHandler();

    /************************************************************
    * buttonClickHandlerHelp()
    * ----------------------------------------------------------
    * Erases data entered into the leave a review page.
    ************************************************************/
    void buttonClickHandlerHelp();

private slots:
 //   void on_pushButton_SQLDB_clicked();

    /************************************************************
    * on_pushButton_adminlogin_clicked()
    * ----------------------------------------------------------
    * This is used to read in a username and password in from
    * the admin page. If the username and password are typed
    * incorrectly, then an error message will display to the
    * user. If typed correctly, a window to grant access to
    * using the customer database will appear.
    ************************************************************/
    void on_pushButton_adminlogin_clicked();

    /************************************************************
    * on_pushButton_NextShoppingCart_clicked()
    * ----------------------------------------------------------
    * This will allow the user to go to the cart window to view
    * thier purchase before checkout.
    ************************************************************/
    void on_pushButton_NextShoppingCart_clicked();

private:
    Admin              *admin;
    Ui::MainWindow     *ui;
    ShoppingCartWindow *shoppingCartWindow;
};
#endif // MAINWINDOW_H
