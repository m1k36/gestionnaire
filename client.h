#ifndef CLIENT_H
#define CLIENT_H
#include <QDate>

class Client
{
private:
    int id;
    QString name;
    QDate dateArrivee;
    QDate dateDepart;
    int nbChien;
    int nbChat;
    int nbBoxChien;
    int nbBoxChat;
public:
    Client(int, QString, QDate, QDate, int, int, int, int);
    int getId() const;
    QString getName() const;
    void setName(const QString &newName);
    QDate getDateArrivee() const;
    void setDateArrivee(const QDate &newDateArrivee);
    QDate getDateDepart() const;
    void setDateDepart(const QDate &newDateDepart);
    int getNbChien() const;
    void setNbChien(int newNbChien);
    int getNbChat() const;
    void setNbChat(int newNbChat);
    int getNbBoxChien() const;
    void setNbBoxChien(int newNbBoxChien);
    int getNbBoxChat() const;
    void setNbBoxChat(int newNbBoxChat);
};

#endif // CLIENT_H
