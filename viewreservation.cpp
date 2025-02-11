#include "viewreservation.h"
#include "controller.h"

ViewReservation::ViewReservation(Data* data, QLineEdit * name, QCalendarWidget * arrivee, QCalendarWidget * depart, QSpinBox * nbChien, QSpinBox * nbChat, QSpinBox * nbBoxChien, QSpinBox * nbBoxChat):
    data(data),
    input_name(name),
    input_arrivee(arrivee),
    input_depart(depart),
    input_nbChien(nbChien),
    input_nbChat(nbChat),
    input_nbBoxChien(nbBoxChien),
    input_nbBoxChat(nbBoxChat)
{
    ViewReservation::updateModel();
}

void ViewReservation::updateModel()
{
    input_name->clear();
    input_arrivee->setSelectedDate(QDate::currentDate());
    input_depart->setSelectedDate(QDate::currentDate());
    input_nbChien->setValue(0);
    input_nbChat->setValue(0);
    input_nbBoxChien->setValue(0);
    input_nbBoxChat->setValue(0);
}

void ViewReservation::add()
{
    ControllerAdd controller(data);
    controller.control(input_name->text(), input_arrivee->selectedDate(), input_depart->selectedDate(), input_nbChien->value(), input_nbChat->value(), input_nbBoxChien->value(), input_nbBoxChat->value());
}
