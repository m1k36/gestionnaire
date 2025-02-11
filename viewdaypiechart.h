#ifndef VIEWDAYPIECHART_H
#define VIEWDAYPIECHART_H
#include <QPieSeries>
#include <QDateEdit>
#include <QChart>
#include <QChartView>
#include <QGridLayout>
#include <QToolTip>
#include "observer.h"
#include "data.h"

class ViewDayPieChart : public Observer
{
private:
    Data* data;
    QWidget* widget;
    QPieSeries* series;
    QDateEdit* date;
public:
    ViewDayPieChart(Data*, QWidget*, QDateEdit*);
    void updateModel() override;
};

#endif // VIEWDAYPIECHART_H
