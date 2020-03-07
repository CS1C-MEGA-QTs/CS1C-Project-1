#ifndef CUSTOMERTABLEMODEL_H
#define CUSTOMERTABLEMODEL_H

#include "Database.h"
#include <QSqlTableModel>
#include <QObject>

class CustomerTableModel : public QSqlTableModel
{
    Q_OBJECT
public:
    enum Fields
    {
        ID,
        NAME,
        ADDRESS,
        WEBSITE,
        INTEREST_LEVEL,
        DO_NOT_CONTACT,
        KEY_ACCOUNT,
        PAMPHLET_SENT,
    };


    CustomerTableModel(QObject *parent, QSqlDatabase *db);

    void InitializeCompleteTable();

    void InitializeKeyTable();
};

#endif // CUSTOMERTABLEMODEL_H
