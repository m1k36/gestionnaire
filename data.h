#ifndef DATA_H
#define DATA_H
#include <QList>
#include <QDate>
#include <QDir>
#include "client.h"
#include "blackclient.h"
#include "observable.h"
#include "dbmanager.h"

class Data : public Observable
{
private:
    QList<Client*> liste;
    QList<BlackClient*> blackliste;
    DbManager* dbm;
public:
    Data();
    ~Data();
    void addClient(QString, QDate, QDate, int, int, int, int);
    void removeClient(int);
    void modifyClient(int, QString, QDate, QDate, int, int, int, int);
    Client* getById(int);
    QList<Client*> getSearchByName(QString);

    QList<int> getListIntBox(int, QDate, QDate, QString);
    int getNbEntree(QDate);
    int getNbDepart(QDate);
    int getNbChien(QDate);
    int getNbChat(QDate);
    QList<Client*> getNbEntreeList(QDate);
    QList<Client*> getNbDepartList(QDate);
    Client* isSimilar(QString, QDate, QDate);

    void addBlackClient(QString, QString);
    void removeBlackClient(int);
    void modifyBlackClient(int, QString, QString);
    BlackClient* getByIdBlackClient(int);
    QList<BlackClient*> getSearchByNameBlackClient(QString);
    BlackClient* isBlackListed(QString);

    void refresh();
    void refreshBlackListe();
};

#endif // DATA_H
