#ifndef VIEWHISTOGRAMMECHIEN_H
#define VIEWHISTOGRAMMECHIEN_H
#include <QtCharts/QBarSeries>
#include <QtCharts/QValueAxis>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QGridLayout>
#include <QDateEdit>
#include "observer.h"
#include "data.h"

class ViewHistogrammeChien : public Observer
{
private:
    Data* data;
    QWidget* widget;
    QBarSeries* series;
    QValueAxis* axisY;
    QBarCategoryAxis* axisX;
    QDateEdit* min;
    QDateEdit* max;
public:
    ViewHistogrammeChien(Data*, QWidget*, QDateEdit*, QDateEdit*);
    void updateModel() override;
};

#endif // VIEWHISTOGRAMMECHIEN_H
