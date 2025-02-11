#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql/QSqlRecord>
#include <QJsonObject>
#include <QVector>
#include "client.h"
#include "blackclient.h"

class DbManager
{
private:
    QSqlDatabase sqldb;
public:
    DbManager(const QString& path);
    ~DbManager();

    bool isOpen() const;
    bool createTable();
    bool addData(QString, QDate, QDate, int, int, int, int);
    bool removeData(int);
    bool modifyData(int, QString, QDate, QDate, int, int, int, int);
    bool entryExists(int) const;

    bool createTableBlackList();
    bool addDataBlackClient(QString, QString);
    bool removeDataBlackClient(int);
    bool modifyDataBlackClient(int, QString, QString);
    bool entryExistsBlackClient(int) const;

    QList<Client*> getAllData() const;
    QList<BlackClient*> getAllDataBlackClient() const;

    bool removeAllData();

};

#endif // DBMANAGER_H
