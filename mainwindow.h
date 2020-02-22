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

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
