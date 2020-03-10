#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>

class Database : public QSqlDatabase
{
public:
    // Constructor
        // Parameterized constructor
    Database(QString path, QString driver);

    // Mutators
        // Testimonials Page //
            //Add review (customerName, reviewText)
    bool AddReview(QString name, QString reviewText);

        // Database Interface
            // Login
    bool AttemptLogin(QString username, QString password);

            // Add customer
                // Note: This will convert empty values to null too
    bool AddCustomer(QString name, QString address, QString website,
                     QString interestLevel, QString doNotContact,
                     QString keyAccount, QString pamphletSent);

            // Edit customer data
    bool UpdateCustomer(QString customerID, QString name, QString address,
                        QString website, QString interestLevel,
                        QString doNotContact, QString keyAccount,
                        QString pamphletSent);

            // Remove customer
    bool DeleteCustomer(QString customerID);

        // Home Page (?) //
            // Change 'pamphletSent' to 'true' (when customer orders pamphlet)
    bool SendPamphlet(QString customerName);

    // Accessors
            // Print reviews (customerName, reviewText)
    QStringList GetReviews();

    // Destructor
    ~Database();
};

#endif // DATABASE_H
