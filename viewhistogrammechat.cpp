#include "viewhistogrammechat.h"
#include <QBarSet>
#include <QColor>
#include <QToolTip>

ViewHistogrammeChat::ViewHistogrammeChat(Data* data, QWidget* widget,QDateEdit*min, QDateEdit* max) :
    data(data),
    widget(widget),
    min(min),
    max(max)
{
    min->setDate(QDate::currentDate().addDays(-7));
    max->setDate(QDate::currentDate().addDays(7));
    series = new QBarSeries();

    QChart* chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Chat");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    axisY = new QValueAxis();
    axisY->setLabelFormat("%d");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView* chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QGridLayout* chartLayout = new QGridLayout;
    chartLayout->addWidget(chartView, 0, 0);
    chartLayout->setContentsMargins(0, 0, 0, 0);

    widget->setLayout(chartLayout);

    ViewHistogrammeChat::updateModel();
}


void ViewHistogrammeChat::updateModel()
{
    series->clear();
    axisX->clear();
    if(max->date()<min->date()){
        max->setDate(min->date());
    }
    int maxY = 50;
    int size = min->date().daysTo(max->date());
    QStringList categories;

    for(int i=0; i<=size; i++){
        categories.append(QString::number(min->date().addDays(i).day())+"/"+QString::number(min->date().addDays(i).month()));
    }
    axisX->append(categories);

    QList<int> boxPerDay = data->getListIntBox(size+1, min->date(), max->date(), "chat");

    QBarSet* set = new QBarSet("Box remplis");
    set->setColor(QColor(255, 70, 70));
    for(int value:boxPerDay){
        *set << value;
    }

    series->append(set);
    axisY->setRange(0, maxY);
    widget->repaint();

    QObject::connect(set, &QBarSet::hovered, [set, categories](bool status, int index) {
        if(status)
            QToolTip::showText(QCursor::pos(), QString("Date : "+categories.at(index)+'\n'+"Box rempli : "+QString::number(set->at(index))));
    });
}
