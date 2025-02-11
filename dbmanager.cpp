#include "dbmanager.h"
#include <QDebug>
#include <QDate>

DbManager::DbManager(const QString &path)
{
    sqldb = QSqlDatabase::addDatabase("QSQLITE");

    if (sqldb.isValid()) {
        qDebug() << "Le pilote est valide.";
    } else {
        qDebug() << "Le pilote est invalide.";
    }

    sqldb.setDatabaseName(path);

    if (!sqldb.open()) {
        qDebug() << "Erreur : Impossible d'ouvrir la base de données.";
        qDebug() << "Détails de l'erreur :" << sqldb.lastError().text();
    } else {
        qDebug() << "Base de données ouverte.";
    }
}

DbManager::~DbManager()
{
    if (sqldb.isOpen())
    {
        sqldb.close();
    }
}

bool DbManager::isOpen() const
{
    return sqldb.isOpen();
}

bool DbManager::createTable()
{
    bool success = false;

    QSqlQuery query;
    query.prepare("CREATE TABLE client(id INTEGER PRIMARY KEY AUTOINCREMENT, name VARCHAR(255), dayArr INTEGER, monthArr INTEGER, yearArr INTEGER, dayDep INTEGER, monthDep INTEGER, yearDep INTEGER, nbChien INTEGER, nbChat INTEGER, nbBoxChien INTEGER, nbBoxChat INTEGER);");

    if (!query.exec())
    {
        success = false;
    }

    return success;
}

bool DbManager::addData(QString name, QDate dateArrivee, QDate dateDepart, int nbChien, int nbChat, int nbBoxChien, int nbBoxChat)
{
    bool success = false;

    QSqlQuery queryAdd;
    queryAdd.prepare("INSERT INTO client (name, dayArr, monthArr, yearArr, dayDep, monthDep, yearDep, nbChien, nbChat, nbBoxChien, nbBoxChat) VALUES (:name, :dayArr, :monthArr, :yearArr, :dayDep, :monthDep, :yearDep, :nbChien, :nbChat, :nbBoxChien, :nbBoxChat)");
    queryAdd.bindValue(":name", name);

    queryAdd.bindValue(":dayArr", dateArrivee.day());
    queryAdd.bindValue(":monthArr", dateArrivee.month());
    queryAdd.bindValue(":yearArr", dateArrivee.year());
    queryAdd.bindValue(":dayDep", dateDepart.day());
    queryAdd.bindValue(":monthDep", dateDepart.month());
    queryAdd.bindValue(":yearDep", dateDepart.year());

    queryAdd.bindValue(":nbChien", nbChien);
    queryAdd.bindValue(":nbChat", nbChat);
    queryAdd.bindValue(":nbBoxChien", nbBoxChien);
    queryAdd.bindValue(":nbBoxChat", nbBoxChat);

    if(queryAdd.exec())
    {
        success = true;
    }

    return success;
}

bool DbManager::removeData(int id)
{
    bool success = false;

    if (entryExists(id))
    {
        QSqlQuery queryDelete;
        queryDelete.prepare("DELETE FROM client WHERE id = (:id)");
        queryDelete.bindValue(":id", id);
        success = queryDelete.exec();
    }

    return success;
}

bool DbManager::modifyData(int id, QString name, QDate arrivee, QDate depart, int nbChien, int nbChat, int nbBoxChien, int nbBoxChat)
{
    QSqlQuery query;
    query.prepare("UPDATE client SET name = :name, dayArr = :dayArr, monthArr = :monthArr, yearArr = :yearArr, dayDep = :dayDep, monthDep = :monthDep, yearDep = :yearDep, nbChien = :nbChien, nbChat = :nbChat, nbBoxChien = :nbBoxChien, nbBoxChat = :nbBoxChat WHERE id = :id");

    query.bindValue(":name", name);

    query.bindValue(":dayArr", arrivee.day());
    query.bindValue(":monthArr", arrivee.month());
    query.bindValue(":yearArr", arrivee.year());
    query.bindValue(":dayDep", depart.day());
    query.bindValue(":monthDep", depart.month());
    query.bindValue(":yearDep", depart.year());

    query.bindValue(":nbChien", nbChien);
    query.bindValue(":nbChat", nbChat);
    query.bindValue(":nbBoxChien", nbBoxChien);
    query.bindValue(":nbBoxChat", nbBoxChat);
    query.bindValue(":id", id);

    bool succes = query.exec();

    return succes;
}

bool DbManager::entryExists(int id) const
{
    bool exists = false;

    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT id FROM client WHERE id = (:id)");
    checkQuery.bindValue(":id", id);

    if (checkQuery.exec())
    {
        if (checkQuery.next())
        {
            exists = true;
        }
    }

    return exists;
}

bool DbManager::createTableBlackList()
{
    bool success = false;

    QSqlQuery query;
    query.prepare("CREATE TABLE blackList(id INTEGER PRIMARY KEY AUTOINCREMENT, name VARCHAR(255), description TEXT);");

    if (!query.exec())
    {
        success = false;
    }

    return success;
}

bool DbManager::addDataBlackClient(QString name, QString description)
{
    bool success = false;

    QSqlQuery queryAdd;
    queryAdd.prepare("INSERT INTO blackList (name, description) VALUES (:name, :description);");
    queryAdd.bindValue(":name", name);
    queryAdd.bindValue(":description", description);

    if(queryAdd.exec())
    {
        success = true;
    }

    return success;
}

bool DbManager::removeDataBlackClient(int id)
{
    bool success = false;

    if (entryExistsBlackClient(id))
    {
        QSqlQuery queryDelete;
        queryDelete.prepare("DELETE FROM blackList WHERE id = (:id)");
        queryDelete.bindValue(":id", id);
        success = queryDelete.exec();
    }

    return success;
}

bool DbManager::modifyDataBlackClient(int id, QString name, QString description)
{
    QSqlQuery query;
    query.prepare("UPDATE blackList SET name = :name, description = :description WHERE id = :id");

    query.bindValue(":name", name);
    query.bindValue(":description", description);
    query.bindValue(":id", id);

    bool succes = query.exec();

    return succes;
}

bool DbManager::entryExistsBlackClient(int id) const
{
    bool exists = false;

    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT id FROM blackList WHERE id = (:id)");
    checkQuery.bindValue(":id", id);

    if (checkQuery.exec())
    {
        if (checkQuery.next())
        {
            exists = true;
        }
    }

    return exists;
}

QList<Client*> DbManager::getAllData() const
{
    QList<Client*> liste;
    QSqlQuery query;

    if (query.exec("SELECT * FROM client")) {
        while (query.next()) {
            int id = query.value("id").toInt();
            QString name = query.value("name").toString();
            int dayArr = query.value("dayArr").toInt();
            int monthArr = query.value("monthArr").toInt();
            int yearArr = query.value("yearArr").toInt();
            int dayDep = query.value("dayDep").toInt();
            int monthDep = query.value("monthDep").toInt();
            int yearDep = query.value("yearDep").toInt();
            int nbChien = query.value("nbChien").toInt();
            int nbChat = query.value("nbChat").toInt();
            int nbBoxChien = query.value("nbBoxChien").toInt();
            int nbBoxChat = query.value("nbBoxChat").toInt();

            liste.append(new Client(id, name, QDate(yearArr, monthArr, dayArr), QDate(yearDep, monthDep, dayDep), nbChien, nbChat, nbBoxChien, nbBoxChat));
        }
    }

    return liste;
}

QList<BlackClient *> DbManager::getAllDataBlackClient() const
{
    QList<BlackClient*> liste;
    QSqlQuery query;

    if (query.exec("SELECT * FROM blackList")) {
        while (query.next()) {
            int id = query.value("id").toInt();
            QString name = query.value("name").toString();
            QString description = query.value("description").toString();

            liste.append(new BlackClient(id, name, description));
        }
    }

    return liste;
}

bool DbManager::removeAllData()
{
    bool success = false;

    QSqlQuery removeQuery;
    removeQuery.prepare("DELETE FROM client");

    if (removeQuery.exec())
    {
        success = true;
    }

    return success;
}
