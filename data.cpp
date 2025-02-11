#include "data.h"

Data::Data()
{
    dbm = new DbManager(QString(QDir::currentPath() + "/data/dbClient.db"));
    if (dbm->isOpen()){
        dbm->createTable();
        dbm->createTableBlackList();
        refresh();
        refreshBlackListe();
    }
}

Data::~Data()
{
    for(Client* client : liste){
        delete client;
    }
    for(BlackClient* client : blackliste){
        delete client;
    }
    delete dbm;
}

void Data::addClient(QString name, QDate dateArrivee, QDate dateDepart, int nbChien, int nbChat, int nbBoxChien, int nbBoxChat)
{
    if (dbm->isOpen()){
        dbm->addData(name, dateArrivee, dateDepart, nbChien, nbChat, nbBoxChien, nbBoxChat);
    }
    refresh();
}

void Data::removeClient(int id)
{
    for(Client* client : liste){
        if(client->getId()==id){
            if (dbm->isOpen()){
                if(dbm->removeData(id)){
                    liste.removeOne(client);
                    delete client;
                }
            }
            break;
        }
    }
}

void Data::modifyClient(int id, QString name, QDate arrivee, QDate depart, int nbChien, int nbChat, int nbBoxChien, int nbBoxChat)
{
    for(Client* client : liste){
        if(client->getId()==id){
            if (dbm->isOpen()){
                if(dbm->modifyData(id, name, arrivee, depart, nbChien, nbChat, nbBoxChien, nbBoxChat)){
                    client->setName(name);
                    client->setDateArrivee(arrivee);
                    client->setDateDepart(depart);
                    client->setNbChien(nbChien);
                    client->setNbChat(nbChat);
                    client->setNbBoxChien(nbBoxChien);
                    client->setNbBoxChat(nbBoxChat);
                }
            }
            break;
        }
    }
}

Client *Data::getById(int id)
{
    for(Client* client : liste){
        if(client->getId()==id){
            return client;
        }
    }
    return nullptr;
}

QList<Client *> Data::getSearchByName(QString searchName)
{
    QList<Client*> search;
    for(Client* client : liste){
        if(client->getName().toLower().contains(searchName.toLower())){
            search.append(client);
        }
    }
    for(int i=0; i<search.size(); i++){
        int newest = i;
        for(int j=i; j<search.size(); j++){
            if(search.at(newest)->getDateArrivee()<= search.at(j)->getDateArrivee()){
                newest = j;
            }
        }
        search.swapItemsAt(i, newest);
    }
    return search;
}

QList<int> Data::getListIntBox(int size, QDate min, QDate max, QString type)
{
    QList<int> boxPerDay(size);
    for (Client* client : liste)
    {
        QDate arrivee = client->getDateArrivee();
        QDate depart = client->getDateDepart();
        if(!(depart<min && arrivee>max)){
            int i=0;
            for(QDate date = min; date<=max; date = date.addDays(1)){
                if(date>=arrivee && date <= depart){
                    if(type=="chien")
                        boxPerDay[i]+=client->getNbBoxChien();
                    if(type=="chat")
                        boxPerDay[i]+=client->getNbBoxChat();
                }
                i++;
            }
        }
    }
    return boxPerDay;
}

int Data::getNbEntree(QDate date)
{
    int cpt = 0;
    for(Client* client : liste){
        if(client->getDateArrivee()==date)
            cpt++;
    }
    return cpt;
}

int Data::getNbDepart(QDate date)
{
    int cpt = 0;
    for(Client* client : liste){
        if(client->getDateDepart()==date)
            cpt++;
    }
    return cpt;
}

int Data::getNbChien(QDate date)
{
    int cpt = 0;
    for(Client* client : liste){
        if(client->getDateDepart()>=date && client->getDateArrivee()<=date)
            cpt+=client->getNbChien();
    }
    return cpt;
}

int Data::getNbChat(QDate date)
{
    int cpt = 0;
    for(Client* client : liste){
        if(client->getDateDepart()>=date && client->getDateArrivee()<=date)
            cpt+=client->getNbChat();
    }
    return cpt;
}

QList<Client *> Data::getNbEntreeList(QDate date)
{
    QList<Client*> entree;
    for(Client* client : liste){
        if(client->getDateArrivee()==date){
            entree.append(client);
        }
    }
    return entree;
}

QList<Client *> Data::getNbDepartList(QDate date)
{
    QList<Client*> depart;
    for(Client* client : liste){
        if(client->getDateDepart()==date){
            depart.append(client);
        }
    }
    return depart;
}

void Data::refresh()
{
    for(Client* client:liste){
        delete client;
    }
    liste = dbm->getAllData();
}

void Data::refreshBlackListe()
{
    for(BlackClient* client:blackliste){
        delete client;
    }
    blackliste = dbm->getAllDataBlackClient();
}

Client *Data::isSimilar(QString name, QDate arrivee, QDate depart)
{
    for(Client* client:liste){
        if(client->getName().toLower()==name.toLower() && !(depart < client->getDateArrivee() || arrivee > client->getDateDepart())){
            return client;
        }
    }
    return nullptr;
}

void Data::addBlackClient(QString name, QString desc)
{
    if (dbm->isOpen()){
        dbm->addDataBlackClient(name, desc);
    }
    refreshBlackListe();
}

void Data::removeBlackClient(int id)
{
    for(BlackClient* client:blackliste){
        if(client->getId()==id){
            if (dbm->isOpen()){
                if(dbm->removeDataBlackClient(id)){
                    blackliste.removeOne(client);
                    delete client;
                }
            }
            return;
        }
    }
}

void Data::modifyBlackClient(int id, QString name, QString desc)
{
    for(BlackClient* client:blackliste){
        if(client->getId()==id){
            client->setName(name);
            client->setDescription(desc);
            if (dbm->isOpen()){
                dbm->modifyDataBlackClient(id, name, desc);
            }
            return;
        }
    }
}

BlackClient *Data::getByIdBlackClient(int id)
{
    for(BlackClient* client:blackliste){
        if(client->getId()==id){
            return client;
        }
    }
    return nullptr;
}

QList<BlackClient *> Data::getSearchByNameBlackClient(QString searchName)
{
    QList<BlackClient*> search;
    for(BlackClient* client : blackliste){
        if(client->getName().toLower().contains(searchName.toLower())){
            search.append(client);
        }
    }
    return search;
}

BlackClient *Data::isBlackListed(QString name)
{
    for(BlackClient* client:blackliste){
        if(client->getName().toLower()==name.toLower()){
            return client;
        }
    }
    return nullptr;
}
