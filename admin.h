#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
namespace Ui {
class Admin;
}

class Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();
private slots:
    void on_pushButton_SQLDB_clicked();
    void on_pushButton_FAdminTMain_clicked();

private:
    Ui::Admin *ui;
};

#endif // ADMIN_H
