#include "client.h"

Client::Client(int id, QString name, QDate arrivee, QDate depart, int nbChien, int nbChat, int nbBoxChien, int nbBoxChat):
    id(id),
    name(name),
    dateArrivee(arrivee),
    dateDepart(depart),
    nbChien(nbChien),
    nbChat(nbChat),
    nbBoxChien(nbBoxChien),
    nbBoxChat(nbBoxChat)
{

}

int Client::getId() const
{
    return id;
}

QString Client::getName() const
{
    return name;
}

void Client::setName(const QString &newName)
{
    name = newName;
}

QDate Client::getDateArrivee() const
{
    return dateArrivee;
}

void Client::setDateArrivee(const QDate &newDateArrivee)
{
    dateArrivee = newDateArrivee;
}

QDate Client::getDateDepart() const
{
    return dateDepart;
}

void Client::setDateDepart(const QDate &newDateDepart)
{
    dateDepart = newDateDepart;
}

int Client::getNbChien() const
{
    return nbChien;
}

void Client::setNbChien(int newNbChien)
{
    nbChien = newNbChien;
}

int Client::getNbChat() const
{
    return nbChat;
}

void Client::setNbChat(int newNbChat)
{
    nbChat = newNbChat;
}

int Client::getNbBoxChien() const
{
    return nbBoxChien;
}

void Client::setNbBoxChien(int newNbBoxChien)
{
    nbBoxChien = newNbBoxChien;
}

int Client::getNbBoxChat() const
{
    return nbBoxChat;
}

void Client::setNbBoxChat(int newNbBoxChat)
{
    nbBoxChat = newNbBoxChat;
}
