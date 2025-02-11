#ifndef VIEWRESERVATION_H
#define VIEWRESERVATION_H
#include <QDate>
#include <QLineEdit>
#include <QCalendarWidget>
#include <QSpinBox>
#include "data.h"
#include "observer.h"

class ViewReservation : public Observer
{
private:
    Data* data;
    QLineEdit* input_name;
    QCalendarWidget* input_arrivee;
    QCalendarWidget* input_depart;
    QSpinBox* input_nbChien;
    QSpinBox* input_nbChat;
    QSpinBox* input_nbBoxChien;
    QSpinBox* input_nbBoxChat;
public:
    ViewReservation(Data*, QLineEdit*, QCalendarWidget*, QCalendarWidget*, QSpinBox*, QSpinBox*, QSpinBox*, QSpinBox*);
    void updateModel() override;
public slots:
    void add();
};

#endif // VIEWRESERVATION_H
