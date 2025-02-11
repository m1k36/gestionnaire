#include "viewdayinformation.h"

ViewDayInformation::ViewDayInformation(Data * data, QDateEdit * date, QLabel * entree, QLabel * depart, QTableWidget * tableEntree, QTableWidget * tableDepart):
    data(data),
    date(date),
    entree(entree),
    depart(depart),
    tableEntree(tableEntree),
    tableDepart(tableDepart)
{
    date->setDate(QDate::currentDate());
    ViewDayInformation::updateModel();
}

void ViewDayInformation::updateModel()
{
    tableEntree->setRowCount(0);
    tableDepart->setRowCount(0);

    QDate dateDay = date->date();
    entree->setText(QString::number(data->getNbEntree(dateDay)));
    depart->setText(QString::number(data->getNbDepart(dateDay)));

    for(Client* client : data->getNbEntreeList(dateDay)){
        addRowEntree(client);
    }
    for(Client* client : data->getNbDepartList(dateDay)){
        addRowDepart(client);
    }
}

void ViewDayInformation::addRowEntree(Client * client)
{
    int rowCount = tableEntree->rowCount();
    tableEntree->insertRow(rowCount);

    QTableWidgetItem* itemName = new QTableWidgetItem();
    itemName->setData(Qt::UserRole, client->getId());
    itemName->setText(client->getName());
    QTableWidgetItem* itemArrivee = new QTableWidgetItem();
    itemArrivee->setData(Qt::UserRole, client->getId());
    itemArrivee->setText(client->getDateArrivee().toString());
    QTableWidgetItem* itemDepart = new QTableWidgetItem();
    itemDepart->setData(Qt::UserRole, client->getId());
    itemDepart->setText(client->getDateDepart().toString());

    tableEntree->setItem(rowCount, 0, itemName);
    tableEntree->setItem(rowCount, 1, itemArrivee);
    tableEntree->setItem(rowCount, 2, itemDepart);
}

void ViewDayInformation::addRowDepart(Client * client)
{
    int rowCount = tableDepart->rowCount();
    tableDepart->insertRow(rowCount);

    QTableWidgetItem* itemName = new QTableWidgetItem();
    itemName->setData(Qt::UserRole, client->getId());
    itemName->setText(client->getName());
    QTableWidgetItem* itemArrivee = new QTableWidgetItem();
    itemArrivee->setData(Qt::UserRole, client->getId());
    itemArrivee->setText(client->getDateArrivee().toString());
    QTableWidgetItem* itemDepart = new QTableWidgetItem();
    itemDepart->setData(Qt::UserRole, client->getId());
    itemDepart->setText(client->getDateDepart().toString());

    tableDepart->setItem(rowCount, 0, itemName);
    tableDepart->setItem(rowCount, 1, itemArrivee);
    tableDepart->setItem(rowCount, 2, itemDepart);
}
