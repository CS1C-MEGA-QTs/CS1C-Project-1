/******************************************************************************
 * PROGRAMMERS: Jonathan Aguirre
 *              Tina     Faraji
 *              Suhyr    Hasan
 *              Weston   Mathews
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
    void buttonClickHandler();
    void buttonClickHandlerHelp();

private slots:
 //   void on_pushButton_SQLDB_clicked();

    void on_pushButton_adminlogin_clicked();

    void on_pushButton_NextShoppingCart_clicked();

private:
    Ui::MainWindow *ui;
    Admin *admin;
    ShoppingCartWindow *shoppingCartWindow;
};
#endif // MAINWINDOW_H
