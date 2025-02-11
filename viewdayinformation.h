#ifndef VIEWDAYINFORMATION_H
#define VIEWDAYINFORMATION_H
#include <QLabel>
#include <QTableWidget>
#include <QDateEdit>
#include "data.h"
#include "observer.h"

class ViewDayInformation : public Observer
{
private:
    Data* data;
    QDateEdit* date;
    QLabel* entree;
    QLabel* depart;
    QTableWidget* tableEntree;
    QTableWidget* tableDepart;
public:
    ViewDayInformation(Data*, QDateEdit*, QLabel*, QLabel*, QTableWidget*, QTableWidget*);
    void updateModel() override;
    void addRowEntree(Client*);
    void addRowDepart(Client*);
};

#endif // VIEWDAYINFORMATION_H
