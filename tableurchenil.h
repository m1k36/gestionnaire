#ifndef TABLEURCHENIL_H
#define TABLEURCHENIL_H
#include "data.h"
#include "viewreservation.h"
#include "viewclientlist.h"
#include "viewclientmodify.h"
#include "viewhistogrammechien.h"
#include "viewhistogrammechat.h"
#include "viewdayinformation.h"
#include "viewdaypiechart.h"
#include "viewblacklist.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class TableurChenil;
}
QT_END_NAMESPACE

class TableurChenil : public QMainWindow
{
    Q_OBJECT

public:
    TableurChenil(QWidget *parent = nullptr);
    ~TableurChenil();

private:
    Ui::TableurChenil *ui;
    Data* data;
    ViewReservation* reservation;
    ViewClientList* clientList;
    ViewClientModify* clientModify;
    ViewHistogrammeChien* histogrammeChien;
    ViewHistogrammeChat* histogrammeChat;
    ViewHistogrammeChien* histogrammeChienDay;
    ViewHistogrammeChat* histogrammeChatDay;
    ViewDayInformation* dayInfo;
    ViewDayPieChart* pieChart;
    ViewBlackList* blackList;
};
#endif // TABLEURCHENIL_H
