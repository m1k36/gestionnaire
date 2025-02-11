#include "blackclient.h"

BlackClient::BlackClient(int id, QString name, QString description):
    id(id),
    name(name),
    description(description)
{}

int BlackClient::getId() const
{
    return id;
}

QString BlackClient::getName() const
{
    return name;
}

void BlackClient::setName(const QString &newName)
{
    name = newName;
}

QString BlackClient::getDescription() const
{
    return description;
}

void BlackClient::setDescription(const QString &newDescription)
{
    description = newDescription;
}
