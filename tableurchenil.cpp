#include "tableurchenil.h"
#include "./ui_tableurchenil.h"

TableurChenil::TableurChenil(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TableurChenil)
{
    setWindowIcon(QIcon("favicon.ico"));
    ui->setupUi(this);

    data = new Data();

    QList<QLayout*> layouts;
    layouts.append(ui->verticalLayout_6);
    layouts.append(ui->horizontalLayout_10);
    layouts.append(ui->verticalLayout_7);
    layouts.append(ui->verticalLayout_3);
    layouts.append(ui->formLayout_10);
    layouts.append(ui->formLayout_11);

    reservation = new ViewReservation(data, ui->lineEdit_NomReservation, ui->dateArrivee_Reservation, ui->dateDepart_Reservation, ui->spinBox_NbChienReservation, ui->spinBox_NbChatReservation, ui->spinBox_NbBoxChienReservation, ui->spinBox_NbBoxChatReservation);
    clientList = new ViewClientList(data, ui->tableWidget_Search, ui->lineEdit_Search);
    clientModify = new ViewClientModify(data, layouts, ui->lineEdit_NomModify, ui->dateArrivee_Modify, ui->dateDepart_Modify, ui->spinBox_NbChienModify, ui->spinBox_NbChatModify, ui->spinBox_NbBoxChienModify, ui->spinBox_NbBoxChatModify);
    histogrammeChien = new ViewHistogrammeChien(data, ui->widget_HistogrammeChien, ui->dateEdit_ChienMinStats, ui->dateEdit_ChienMaxStats);
    histogrammeChat = new ViewHistogrammeChat(data, ui->widget_HistogrammeChat, ui->dateEdit_ChatMinStats, ui->dateEdit_ChatMaxStats);
    dayInfo = new ViewDayInformation(data, ui->dateEdit_Day, ui->label_NbEntreeDay, ui->label_NbDepartDay, ui->tableWidget_EntreeDay, ui->tableWidget_DepartDay);
    histogrammeChienDay = new ViewHistogrammeChien(data, ui->widget_BoxChienDay, ui->dateEdit_Day, ui->dateEdit_Day);
    histogrammeChatDay = new ViewHistogrammeChat(data, ui->widget_BoxChatDay, ui->dateEdit_Day, ui->dateEdit_Day);
    pieChart = new ViewDayPieChart(data, ui->widget_PieChart, ui->dateEdit_Day);
    blackList = new ViewBlackList(data, ui->tableWidget_SearchBlackList, ui->lineEdit_SearchBlackList, ui->lineEdit_NameBlackList, ui->textEdit_DescBlackList, ui->pushButton_AddBlackList, ui->pushButton_RemoveBlackList, ui->pushButton_ModifyBlackList);

    connect(ui->pushButton_AddReservation, &QPushButton::pressed, reservation, &ViewReservation::add);
    connect(ui->pushButton_ClearReservation, &QPushButton::pressed, reservation, &ViewReservation::updateModel);
    connect(ui->pushButton_Search, &QPushButton::pressed, clientList, &ViewClientList::search);
    connect(ui->tableWidget_Search, &QTableWidget::itemPressed, clientModify, &ViewClientModify::itemPressed);
    connect(ui->pushButton_Cancel, &QPushButton::pressed, clientModify, &ViewClientModify::updateModel);
    connect(ui->pushButton_Modify, &QPushButton::pressed, clientModify, &ViewClientModify::modify);
    connect(ui->pushButton_Remove, &QPushButton::pressed, clientModify, &ViewClientModify::remove);
    connect(ui->pushButton_RefreshChienStats, &QPushButton::pressed, histogrammeChien, &ViewHistogrammeChien::updateModel);
    connect(ui->pushButton_RefreshChatStats, &QPushButton::pressed, histogrammeChat, &ViewHistogrammeChat::updateModel);
    connect(ui->pushButton_RefreshDay, &QPushButton::pressed, dayInfo, &ViewDayInformation::updateModel);
    connect(ui->pushButton_RefreshDay, &QPushButton::pressed, pieChart, &ViewDayPieChart::updateModel);
    connect(ui->pushButton_RefreshDay, &QPushButton::pressed, histogrammeChienDay, &ViewHistogrammeChien::updateModel);
    connect(ui->pushButton_RefreshDay, &QPushButton::pressed, histogrammeChatDay, &ViewHistogrammeChat::updateModel);
    connect(ui->pushButton_AddBlackList, &QPushButton::pressed, blackList, &ViewBlackList::add);
    connect(ui->pushButton_RemoveBlackList, &QPushButton::pressed, blackList, &ViewBlackList::remove);
    connect(ui->pushButton_CancelBlackList, &QPushButton::pressed, blackList, &ViewBlackList::updateModel);
    connect(ui->pushButton_ModifyBlackList, &QPushButton::pressed, blackList, &ViewBlackList::modify);
    connect(ui->pushButton_SearchBlackList, &QPushButton::pressed, blackList, &ViewBlackList::search);
    connect(ui->tableWidget_SearchBlackList, &QTableWidget::itemPressed, blackList, &ViewBlackList::itemPressed);

    data->addObserver(reservation);
    data->addObserver(clientModify);
    data->addObserver(clientList);
    data->addObserver(histogrammeChien);
    data->addObserver(histogrammeChat);
    data->addObserver(dayInfo);
    data->addObserver(pieChart);
    data->addObserver(histogrammeChienDay);
    data->addObserver(histogrammeChatDay);
    data->addObserver(blackList);

    /* ---- Modificateur ---- */
    ui->tableWidget_Search->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_EntreeDay->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_DepartDay->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_SearchBlackList->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

TableurChenil::~TableurChenil()
{
    delete data;
    delete reservation;
    delete clientList;
    delete clientModify;
    delete histogrammeChien;
    delete histogrammeChat;
    delete histogrammeChienDay;
    delete histogrammeChatDay;
    delete dayInfo;
    delete pieChart;
    delete blackList;
    delete ui;
}
