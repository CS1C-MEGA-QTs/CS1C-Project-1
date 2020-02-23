#include "admin.h"
#include "ui_admin.h"
#include "mainwindow.h"
Admin::Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
}

Admin::~Admin()
{
    delete ui;
}
void Admin::on_pushButton_SQLDB_clicked()
{
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    // EDIT THIS LINE, change it to where the database is
    // located on your computer
    sqlitedb.setDatabaseName("C:/sqlite3/MegaQTDB.db");
    if(!sqlitedb.open()) {
        QMessageBox::information(this, "Not Connected", "Database Not connected");
    }
    else {

        QMessageBox::information(this, "Connected", "Database Connected Successfully");
    }
}

void Admin::on_pushButton_FAdminTMain_clicked()
{
    // Show the MainWindow (i.e. the parent window)
    MainWindow *newmain= new MainWindow();
    newmain->show();
}
