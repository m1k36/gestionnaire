#include "viewclientlist.h"

ViewClientList::ViewClientList(Data * data, QTableWidget * liste, QLineEdit * input_search):
    data(data),
    liste(liste),
    input_search(input_search)
{
    ViewClientList::updateModel();
}

void ViewClientList::updateModel()
{
    input_search->setText("");
    search();
}

void ViewClientList::search()
{
    liste->setRowCount(0);
    for(Client* client : data->getSearchByName(input_search->text())){
        addRow(client);
    }
}

void ViewClientList::addRow(Client* client)
{
    int rowCount = liste->rowCount();
    liste->insertRow(rowCount);

    QTableWidgetItem* itemName = new QTableWidgetItem();
    itemName->setData(Qt::UserRole, client->getId());
    itemName->setText(client->getName());
    QTableWidgetItem* itemArrivee = new QTableWidgetItem();
    itemArrivee->setData(Qt::UserRole, client->getId());
    itemArrivee->setText(client->getDateArrivee().toString());
    QTableWidgetItem* itemDepart = new QTableWidgetItem();
    itemDepart->setData(Qt::UserRole, client->getId());
    itemDepart->setText(client->getDateDepart().toString());

    liste->setItem(rowCount, 0, itemName);
    liste->setItem(rowCount, 1, itemArrivee);
    liste->setItem(rowCount, 2, itemDepart);
}
