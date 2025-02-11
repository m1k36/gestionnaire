#include "viewdaypiechart.h"

ViewDayPieChart::ViewDayPieChart(Data * data, QWidget * widget, QDateEdit* date):
    data(data),
    widget(widget),
    date(date)
{
    series = new QPieSeries();
    date->setDate(QDate::currentDate());

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Répartition des animaux");
    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QGridLayout* chartLayout = new QGridLayout;
    chartLayout->addWidget(chartView, 0, 0);
    chartLayout->setContentsMargins(0, 0, 0, 0);

    widget->setLayout(chartLayout);
    ViewDayPieChart::updateModel();
}

void ViewDayPieChart::updateModel()
{
    series->clear();
    series->append("Chien", data->getNbChien(date->date()));
    series->append("Chat", data->getNbChat(date->date()));
    QPieSlice *slice0 = series->slices().at(0);
    slice0->setBrush(QColor(70, 70, 255));
    QPieSlice *slice1 = series->slices().at(1);
    slice1->setBrush(QColor(255, 70, 70));

    for (QPieSlice *slice : series->slices()) {
        QObject::connect(slice, &QPieSlice::hovered, [slice](bool state) {
            if (state) {
                QString tooltip = QString("Nombre de %1 :\n%2").arg(slice->label()).arg(slice->value());
                QToolTip::showText(QCursor::pos(), tooltip);
            } else {
                QToolTip::hideText();
            }
        });
    }
}
