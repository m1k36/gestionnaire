#ifndef VIEWHISTOGRAMMECHAT_H
#define VIEWHISTOGRAMMECHAT_H
#include <QtCharts/QBarSeries>
#include <QtCharts/QValueAxis>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QGridLayout>
#include <QDateEdit>
#include "observer.h"
#include "data.h"

class ViewHistogrammeChat : public Observer
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
    ViewHistogrammeChat(Data*, QWidget*, QDateEdit*, QDateEdit*);
    void updateModel() override;
};

#endif // VIEWHISTOGRAMMECHAT_H
