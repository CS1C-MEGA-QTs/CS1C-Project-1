#ifndef SHOPPINGCARTWINDOW_H
#define SHOPPINGCARTWINDOW_H

#include <QDialog>
#include "checkout.h"
namespace Ui {
class ShoppingCartWindow;
}

class ShoppingCartWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ShoppingCartWindow(QWidget *parent = nullptr);
    ~ShoppingCartWindow();

private slots:
    void on_pushButton_BeforeRobotPage_clicked();

    void on_pushButton_NextCheckoutPage_clicked();

private:
    Ui::ShoppingCartWindow *ui;
    checkout *Checkout;
};

#endif // SHOPPINGCARTWINDOW_H
