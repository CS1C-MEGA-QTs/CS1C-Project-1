/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *CustomerService_2;
    QWidget *Home;
    QWidget *Robot;
    QTabWidget *tabWidget;
    QWidget *tab_8;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QWidget *tab_10;
    QWidget *tab_9;
    QWidget *Admin;
    QWidget *CustomerService;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *messageBox;
    QPushButton *sendButton;
    QLineEdit *labelFirstName_2;
    QLineEdit *labelLastName_2;
    QLineEdit *labelCompanyName_2;
    QLabel *labelFirstName;
    QLabel *labelLastName;
    QLabel *labelCompanyName;
    QLabel *labelMessage;
    QWidget *Review;
    QWidget *FAQ;
    QWidget *Help;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1029, 650);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        CustomerService_2 = new QTabWidget(centralwidget);
        CustomerService_2->setObjectName(QString::fromUtf8("CustomerService_2"));
        CustomerService_2->setGeometry(QRect(10, 0, 1031, 601));
        Home = new QWidget();
        Home->setObjectName(QString::fromUtf8("Home"));
        CustomerService_2->addTab(Home, QString());
        Robot = new QWidget();
        Robot->setObjectName(QString::fromUtf8("Robot"));
        tabWidget = new QTabWidget(Robot);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1011, 581));
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        graphicsView = new QGraphicsView(tab_8);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(5, 11, 331, 261));
        graphicsView_2 = new QGraphicsView(tab_8);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(340, 10, 311, 261));
        graphicsView_3 = new QGraphicsView(tab_8);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(660, 10, 331, 261));
        pushButton = new QPushButton(tab_8);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 290, 151, 51));
        pushButton_2 = new QPushButton(tab_8);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 290, 151, 51));
        pushButton_3 = new QPushButton(tab_8);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(730, 300, 151, 51));
        spinBox = new QSpinBox(tab_8);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(200, 300, 61, 41));
        spinBox_2 = new QSpinBox(tab_8);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(530, 300, 61, 41));
        spinBox_3 = new QSpinBox(tab_8);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setGeometry(QRect(900, 300, 61, 41));
        tabWidget->addTab(tab_8, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        tabWidget->addTab(tab_10, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        tabWidget->addTab(tab_9, QString());
        CustomerService_2->addTab(Robot, QString());
        Admin = new QWidget();
        Admin->setObjectName(QString::fromUtf8("Admin"));
        CustomerService_2->addTab(Admin, QString());
        CustomerService = new QWidget();
        CustomerService->setObjectName(QString::fromUtf8("CustomerService"));
        label = new QLabel(CustomerService);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 210, 251, 301));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(CustomerService);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 671, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("SimSun"));
        font1.setPointSize(48);
        label_2->setFont(font1);
        messageBox = new QTextEdit(CustomerService);
        messageBox->setObjectName(QString::fromUtf8("messageBox"));
        messageBox->setGeometry(QRect(370, 380, 231, 70));
        sendButton = new QPushButton(CustomerService);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(560, 460, 80, 22));
        labelFirstName_2 = new QLineEdit(CustomerService);
        labelFirstName_2->setObjectName(QString::fromUtf8("labelFirstName_2"));
        labelFirstName_2->setGeometry(QRect(370, 230, 111, 21));
        labelLastName_2 = new QLineEdit(CustomerService);
        labelLastName_2->setObjectName(QString::fromUtf8("labelLastName_2"));
        labelLastName_2->setGeometry(QRect(370, 280, 111, 21));
        labelCompanyName_2 = new QLineEdit(CustomerService);
        labelCompanyName_2->setObjectName(QString::fromUtf8("labelCompanyName_2"));
        labelCompanyName_2->setGeometry(QRect(370, 330, 111, 21));
        labelFirstName = new QLabel(CustomerService);
        labelFirstName->setObjectName(QString::fromUtf8("labelFirstName"));
        labelFirstName->setGeometry(QRect(370, 210, 71, 16));
        labelLastName = new QLabel(CustomerService);
        labelLastName->setObjectName(QString::fromUtf8("labelLastName"));
        labelLastName->setGeometry(QRect(370, 260, 71, 16));
        labelCompanyName = new QLabel(CustomerService);
        labelCompanyName->setObjectName(QString::fromUtf8("labelCompanyName"));
        labelCompanyName->setGeometry(QRect(370, 310, 91, 16));
        labelMessage = new QLabel(CustomerService);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));
        labelMessage->setGeometry(QRect(370, 360, 61, 16));
        CustomerService_2->addTab(CustomerService, QString());
        Review = new QWidget();
        Review->setObjectName(QString::fromUtf8("Review"));
        CustomerService_2->addTab(Review, QString());
        FAQ = new QWidget();
        FAQ->setObjectName(QString::fromUtf8("FAQ"));
        CustomerService_2->addTab(FAQ, QString());
        Help = new QWidget();
        Help->setObjectName(QString::fromUtf8("Help"));
        CustomerService_2->addTab(Help, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1029, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(sendButton, SIGNAL(clicked()), MainWindow, SLOT(buttonClickHandler()));

        CustomerService_2->setCurrentIndex(3);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        CustomerService_2->setTabText(CustomerService_2->indexOf(Home), QCoreApplication::translate("MainWindow", "Home", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add to Cart", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Add to Cart", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Add to Cart", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Description", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QCoreApplication::translate("MainWindow", "Shopping Cart", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QCoreApplication::translate("MainWindow", "Checkout", nullptr));
        CustomerService_2->setTabText(CustomerService_2->indexOf(Robot), QCoreApplication::translate("MainWindow", "Robot", nullptr));
        CustomerService_2->setTabText(CustomerService_2->indexOf(Admin), QCoreApplication::translate("MainWindow", "Admin", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ASK AN EXPERT!\n"
"\n"
"Methods to get service\n"
"\n"
"-> By Phone\n"
" (123) - 456 - 7891\n"
"\n"
"-> By email\n"
"\n"
"->Visit a store\n"
"\n"
"\n"
"\n"
"", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Get in touch with us ", nullptr));
        sendButton->setText(QCoreApplication::translate("MainWindow", "SEND", nullptr));
        labelFirstName->setText(QCoreApplication::translate("MainWindow", "FIRST NAME", nullptr));
        labelLastName->setText(QCoreApplication::translate("MainWindow", "LAST NAME", nullptr));
        labelCompanyName->setText(QCoreApplication::translate("MainWindow", "COMPANY NAME", nullptr));
        labelMessage->setText(QCoreApplication::translate("MainWindow", "MESSAGE", nullptr));
        CustomerService_2->setTabText(CustomerService_2->indexOf(CustomerService), QCoreApplication::translate("MainWindow", "Customer Service", nullptr));
        CustomerService_2->setTabText(CustomerService_2->indexOf(Review), QCoreApplication::translate("MainWindow", "Review", nullptr));
        CustomerService_2->setTabText(CustomerService_2->indexOf(FAQ), QCoreApplication::translate("MainWindow", "FAQ", nullptr));
        CustomerService_2->setTabText(CustomerService_2->indexOf(Help), QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
