#ifndef BLACKCLIENT_H
#define BLACKCLIENT_H
#include <QString>

class BlackClient
{
private:
    int id;
    QString name;
    QString description;
public:
    BlackClient(int, QString, QString);
    int getId() const;
    QString getName() const;
    void setName(const QString &newName);
    QString getDescription() const;
    void setDescription(const QString &newDescription);
};

#endif // BLACKCLIENT_H
