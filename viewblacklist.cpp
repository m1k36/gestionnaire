#include "viewblacklist.h"

ViewBlackList::ViewBlackList(Data * data, QTableWidget * liste, QLineEdit * input_search, QLineEdit * input_name, QTextEdit * input_description, QPushButton * add, QPushButton * remove, QPushButton * modify):
    data(data),
    liste(liste),
    input_search(input_search),
    input_name(input_name),
    input_description(input_description),
    button_add(add),
    button_remove(remove),
    button_modify(modify)
{
    remove->setVisible(false);
    modify->setVisible(false);
    ViewBlackList::updateModel();
}

void ViewBlackList::updateModel()
{
    clientModifyId = -1;

    button_remove->setVisible(false);
    button_modify->setVisible(false);
    button_add->setVisible(true);

    search();

    input_name->setText("");
    input_description->setText("");
}

void ViewBlackList::search()
{
    liste->setRowCount(0);
    for(BlackClient* client : data->getSearchByNameBlackClient(input_search->text())){
        addRow(client);
    }
}

void ViewBlackList::addRow(BlackClient* client)
{
    int rowCount = liste->rowCount();
    liste->insertRow(rowCount);

    QTableWidgetItem* itemName = new QTableWidgetItem();
    itemName->setData(Qt::UserRole, client->getId());
    itemName->setText(client->getName());
    QTableWidgetItem* itemDescrition = new QTableWidgetItem();
    itemDescrition->setData(Qt::UserRole, client->getId());
    itemDescrition->setText(client->getDescription());

    liste->setItem(rowCount, 0, itemName);
    liste->setItem(rowCount, 1, itemDescrition);
}

void ViewBlackList::itemPressed(QTableWidgetItem * item)
{
    QVariant id = item->data(Qt::UserRole);
    BlackClient* clientModify = data->getByIdBlackClient(id.toInt());
    if(clientModify!=nullptr){
        clientModifyId = id.toInt();
        input_name->setText(clientModify->getName());
        input_description->setText(clientModify->getDescription());
        button_remove->setVisible(true);
        button_modify->setVisible(true);
        button_add->setVisible(false);
    }
}

void ViewBlackList::modify()
{
    ControllerModifyBlackClient controller(data);
    controller.control(clientModifyId, input_name->text(), input_description->toPlainText());
}

void ViewBlackList::remove()
{
    ControllerRemoveBlackClient controller(data);
    controller.control(clientModifyId);
}

void ViewBlackList::add()
{
    ControllerAddBlackClient controller(data);
    controller.control(input_name->text(), input_description->toPlainText());
}
