#include "viewclientmodify.h"

ViewClientModify::ViewClientModify(Data* data, QList<QLayout*> layouts, QLineEdit * name, QCalendarWidget * arrivee, QCalendarWidget * depart, QSpinBox * nbChien, QSpinBox * nbChat, QSpinBox * nbBoxChien, QSpinBox * nbBoxChat):
    data(data),
    layouts(layouts),
    input_nameModify(name),
    input_arriveeModify(arrivee),
    input_departModify(depart),
    input_nbChienModify(nbChien),
    input_nbChatModify(nbChat),
    input_nbBoxChienModify(nbBoxChien),
    input_nbBoxChatModify(nbBoxChat)
{
    ViewClientModify::updateModel();
    setVisibleLayouts(false);
}

void ViewClientModify::updateModel()
{
    clientModifyId = -1;
    input_nameModify->clear();
    input_arriveeModify->setSelectedDate(QDate::currentDate());
    input_departModify->setSelectedDate(QDate::currentDate());
    input_nbChienModify->setValue(0);
    input_nbChatModify->setValue(0);
    input_nbBoxChienModify->setValue(0);
    input_nbBoxChatModify->setValue(0);

    setVisibleLayouts(false);
}

void ViewClientModify::itemPressed(QTableWidgetItem * item)
{
    QVariant id = item->data(Qt::UserRole);
    Client* clientModify = data->getById(id.toInt());
    if(clientModify!=nullptr){
        clientModifyId = id.toInt();
        input_nameModify->setText(clientModify->getName());
        input_arriveeModify->setSelectedDate(clientModify->getDateArrivee());
        input_departModify->setSelectedDate(clientModify->getDateDepart());
        input_nbChienModify->setValue(clientModify->getNbChien());
        input_nbChatModify->setValue(clientModify->getNbChat());
        input_nbBoxChienModify->setValue(clientModify->getNbBoxChien());
        input_nbBoxChatModify->setValue(clientModify->getNbBoxChat());
        setVisibleLayouts(true);
    }
}

void ViewClientModify::modify()
{
    ControllerModify controller(data);
    controller.control(clientModifyId, input_nameModify->text(), input_arriveeModify->selectedDate(), input_departModify->selectedDate(), input_nbChienModify->value(), input_nbChatModify->value(), input_nbBoxChienModify->value(), input_nbBoxChatModify->value());
}

void ViewClientModify::remove()
{
    ControllerRemove controller(data);
    controller.control(clientModifyId);
}

void ViewClientModify::setVisibleLayouts(bool value)
{
    for(QLayout* layout : layouts){
        for(int i=0; i<layout->count(); i++){
            QWidget* widg = layout->itemAt(i)->widget();
            if(widg!=nullptr){
                widg->setVisible(value);
            }
        }
    }
}
