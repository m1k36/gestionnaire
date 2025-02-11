/********************************************************************************
** Form generated from reading UI file 'tableurchenil.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEURCHENIL_H
#define UI_TABLEURCHENIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableurChenil
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *reservation;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_NomReservation;
    QLineEdit *lineEdit_NomReservation;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_DateArriveeReservation;
    QCalendarWidget *dateArrivee_Reservation;
    QVBoxLayout *verticalLayout;
    QLabel *label_DateDepartReservation;
    QCalendarWidget *dateDepart_Reservation;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_ChienReservation;
    QLabel *label_ChatReservation;
    QHBoxLayout *horizontalLayout_5;
    QFormLayout *formLayout_5;
    QLabel *label_NbChienReservation;
    QSpinBox *spinBox_NbChienReservation;
    QLabel *label_NbBoxChienReservation;
    QSpinBox *spinBox_NbBoxChienReservation;
    QFormLayout *formLayout_6;
    QLabel *label_NbChatReservation;
    QSpinBox *spinBox_NbChatReservation;
    QLabel *label_NbBoxChatReservation;
    QSpinBox *spinBox_NbBoxChatReservation;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_AddReservation;
    QPushButton *pushButton_ClearReservation;
    QWidget *recherche;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_Search;
    QPushButton *pushButton_Search;
    QTableWidget *tableWidget_Search;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_TitreModify;
    QLabel *label_NomModify;
    QLineEdit *lineEdit_NomModify;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_DateArriveeModify;
    QCalendarWidget *dateArrivee_Modify;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_DateDepartModify;
    QCalendarWidget *dateDepart_Modify;
    QHBoxLayout *horizontalLayout_9;
    QFormLayout *formLayout_10;
    QLabel *label_NbChienModify;
    QSpinBox *spinBox_NbChienModify;
    QLabel *label_NbBoxChienModify;
    QSpinBox *spinBox_NbBoxChienModify;
    QFormLayout *formLayout_11;
    QLabel *label_NbChatModify;
    QSpinBox *spinBox_NbChatModify;
    QLabel *label_NbBoxChatModify;
    QSpinBox *spinBox_NbBoxChatModify;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_Remove;
    QPushButton *pushButton_Modify;
    QPushButton *pushButton_Cancel;
    QWidget *statsChien;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_ChienMinStats;
    QDateEdit *dateEdit_ChienMinStats;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_ChienMaxStats;
    QDateEdit *dateEdit_ChienMaxStats;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_Spacer1;
    QPushButton *pushButton_RefreshChienStats;
    QWidget *widget_HistogrammeChien;
    QWidget *statsChat;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_ChatMinStats;
    QDateEdit *dateEdit_ChatMinStats;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_ChatMaxStats;
    QDateEdit *dateEdit_ChatMaxStats;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_Spacer2;
    QPushButton *pushButton_RefreshChatStats;
    QWidget *widget_HistogrammeChat;
    QWidget *statsJournee;
    QHBoxLayout *horizontalLayout_18;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_DateDay;
    QDateEdit *dateEdit_Day;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_EntreeDay;
    QLabel *label_NbEntreeDay;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_DepartDay;
    QLabel *label_NbDepartDay;
    QLabel *label_Spacer3;
    QHBoxLayout *horizontalLayout_17;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_EntreeTableDay;
    QTableWidget *tableWidget_EntreeDay;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_DepartTableDay;
    QTableWidget *tableWidget_DepartDay;
    QPushButton *pushButton_RefreshDay;
    QVBoxLayout *verticalLayout_16;
    QWidget *widget_PieChart;
    QHBoxLayout *horizontalLayout_13;
    QWidget *widget_BoxChienDay;
    QWidget *widget_BoxChatDay;
    QWidget *Black_list;
    QHBoxLayout *horizontalLayout_21;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_NameBlackList;
    QLineEdit *lineEdit_NameBlackList;
    QLabel *label_DescBlackList;
    QTextEdit *textEdit_DescBlackList;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *pushButton_AddBlackList;
    QPushButton *pushButton_RemoveBlackList;
    QPushButton *pushButton_ModifyBlackList;
    QPushButton *pushButton_CancelBlackList;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_20;
    QLineEdit *lineEdit_SearchBlackList;
    QPushButton *pushButton_SearchBlackList;
    QTableWidget *tableWidget_SearchBlackList;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TableurChenil)
    {
        if (TableurChenil->objectName().isEmpty())
            TableurChenil->setObjectName("TableurChenil");
        TableurChenil->resize(1202, 651);
        centralwidget = new QWidget(TableurChenil);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QFont font;
        font.setPointSize(12);
        tabWidget->setFont(font);
        tabWidget->setTabPosition(QTabWidget::TabPosition::North);
        tabWidget->setTabShape(QTabWidget::TabShape::Rounded);
        reservation = new QWidget();
        reservation->setObjectName("reservation");
        QFont font1;
        font1.setPointSize(9);
        reservation->setFont(font1);
        verticalLayout_4 = new QVBoxLayout(reservation);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_NomReservation = new QLabel(reservation);
        label_NomReservation->setObjectName("label_NomReservation");

        verticalLayout_4->addWidget(label_NomReservation);

        lineEdit_NomReservation = new QLineEdit(reservation);
        lineEdit_NomReservation->setObjectName("lineEdit_NomReservation");

        verticalLayout_4->addWidget(lineEdit_NomReservation);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(14);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_DateArriveeReservation = new QLabel(reservation);
        label_DateArriveeReservation->setObjectName("label_DateArriveeReservation");

        verticalLayout_2->addWidget(label_DateArriveeReservation);

        dateArrivee_Reservation = new QCalendarWidget(reservation);
        dateArrivee_Reservation->setObjectName("dateArrivee_Reservation");
        dateArrivee_Reservation->setStyleSheet(QString::fromUtf8(""));
        dateArrivee_Reservation->setGridVisible(true);
        dateArrivee_Reservation->setHorizontalHeaderFormat(QCalendarWidget::HorizontalHeaderFormat::SingleLetterDayNames);
        dateArrivee_Reservation->setVerticalHeaderFormat(QCalendarWidget::VerticalHeaderFormat::NoVerticalHeader);
        dateArrivee_Reservation->setNavigationBarVisible(true);

        verticalLayout_2->addWidget(dateArrivee_Reservation);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_DateDepartReservation = new QLabel(reservation);
        label_DateDepartReservation->setObjectName("label_DateDepartReservation");

        verticalLayout->addWidget(label_DateDepartReservation);

        dateDepart_Reservation = new QCalendarWidget(reservation);
        dateDepart_Reservation->setObjectName("dateDepart_Reservation");
        dateDepart_Reservation->setGridVisible(true);
        dateDepart_Reservation->setSelectionMode(QCalendarWidget::SelectionMode::SingleSelection);
        dateDepart_Reservation->setHorizontalHeaderFormat(QCalendarWidget::HorizontalHeaderFormat::SingleLetterDayNames);
        dateDepart_Reservation->setVerticalHeaderFormat(QCalendarWidget::VerticalHeaderFormat::NoVerticalHeader);

        verticalLayout->addWidget(dateDepart_Reservation);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_ChienReservation = new QLabel(reservation);
        label_ChienReservation->setObjectName("label_ChienReservation");

        horizontalLayout_4->addWidget(label_ChienReservation);

        label_ChatReservation = new QLabel(reservation);
        label_ChatReservation->setObjectName("label_ChatReservation");

        horizontalLayout_4->addWidget(label_ChatReservation);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName("formLayout_5");
        label_NbChienReservation = new QLabel(reservation);
        label_NbChienReservation->setObjectName("label_NbChienReservation");

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_NbChienReservation);

        spinBox_NbChienReservation = new QSpinBox(reservation);
        spinBox_NbChienReservation->setObjectName("spinBox_NbChienReservation");

        formLayout_5->setWidget(0, QFormLayout::FieldRole, spinBox_NbChienReservation);

        label_NbBoxChienReservation = new QLabel(reservation);
        label_NbBoxChienReservation->setObjectName("label_NbBoxChienReservation");

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_NbBoxChienReservation);

        spinBox_NbBoxChienReservation = new QSpinBox(reservation);
        spinBox_NbBoxChienReservation->setObjectName("spinBox_NbBoxChienReservation");

        formLayout_5->setWidget(1, QFormLayout::FieldRole, spinBox_NbBoxChienReservation);


        horizontalLayout_5->addLayout(formLayout_5);

        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName("formLayout_6");
        label_NbChatReservation = new QLabel(reservation);
        label_NbChatReservation->setObjectName("label_NbChatReservation");

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_NbChatReservation);

        spinBox_NbChatReservation = new QSpinBox(reservation);
        spinBox_NbChatReservation->setObjectName("spinBox_NbChatReservation");

        formLayout_6->setWidget(0, QFormLayout::FieldRole, spinBox_NbChatReservation);

        label_NbBoxChatReservation = new QLabel(reservation);
        label_NbBoxChatReservation->setObjectName("label_NbBoxChatReservation");

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_NbBoxChatReservation);

        spinBox_NbBoxChatReservation = new QSpinBox(reservation);
        spinBox_NbBoxChatReservation->setObjectName("spinBox_NbBoxChatReservation");

        formLayout_6->setWidget(1, QFormLayout::FieldRole, spinBox_NbBoxChatReservation);


        horizontalLayout_5->addLayout(formLayout_6);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton_AddReservation = new QPushButton(reservation);
        pushButton_AddReservation->setObjectName("pushButton_AddReservation");
        pushButton_AddReservation->setCheckable(false);

        horizontalLayout_6->addWidget(pushButton_AddReservation);

        pushButton_ClearReservation = new QPushButton(reservation);
        pushButton_ClearReservation->setObjectName("pushButton_ClearReservation");

        horizontalLayout_6->addWidget(pushButton_ClearReservation);


        verticalLayout_4->addLayout(horizontalLayout_6);

        tabWidget->addTab(reservation, QString());
        recherche = new QWidget();
        recherche->setObjectName("recherche");
        recherche->setFont(font1);
        horizontalLayout_11 = new QHBoxLayout(recherche);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        lineEdit_Search = new QLineEdit(recherche);
        lineEdit_Search->setObjectName("lineEdit_Search");

        horizontalLayout_7->addWidget(lineEdit_Search);

        pushButton_Search = new QPushButton(recherche);
        pushButton_Search->setObjectName("pushButton_Search");

        horizontalLayout_7->addWidget(pushButton_Search);


        verticalLayout_5->addLayout(horizontalLayout_7);

        tableWidget_Search = new QTableWidget(recherche);
        if (tableWidget_Search->columnCount() < 3)
            tableWidget_Search->setColumnCount(3);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font2);
        tableWidget_Search->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font2);
        tableWidget_Search->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font2);
        tableWidget_Search->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_Search->setObjectName("tableWidget_Search");
        tableWidget_Search->setEditTriggers(QAbstractItemView::EditTrigger::SelectedClicked);
        tableWidget_Search->horizontalHeader()->setMinimumSectionSize(35);
        tableWidget_Search->horizontalHeader()->setStretchLastSection(true);
        tableWidget_Search->verticalHeader()->setVisible(false);

        verticalLayout_5->addWidget(tableWidget_Search);


        horizontalLayout_11->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_TitreModify = new QLabel(recherche);
        label_TitreModify->setObjectName("label_TitreModify");
        label_TitreModify->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_TitreModify);

        label_NomModify = new QLabel(recherche);
        label_NomModify->setObjectName("label_NomModify");

        verticalLayout_6->addWidget(label_NomModify);

        lineEdit_NomModify = new QLineEdit(recherche);
        lineEdit_NomModify->setObjectName("lineEdit_NomModify");

        verticalLayout_6->addWidget(lineEdit_NomModify);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_DateArriveeModify = new QLabel(recherche);
        label_DateArriveeModify->setObjectName("label_DateArriveeModify");

        verticalLayout_7->addWidget(label_DateArriveeModify);

        dateArrivee_Modify = new QCalendarWidget(recherche);
        dateArrivee_Modify->setObjectName("dateArrivee_Modify");
        dateArrivee_Modify->setGridVisible(true);
        dateArrivee_Modify->setHorizontalHeaderFormat(QCalendarWidget::HorizontalHeaderFormat::SingleLetterDayNames);
        dateArrivee_Modify->setVerticalHeaderFormat(QCalendarWidget::VerticalHeaderFormat::NoVerticalHeader);

        verticalLayout_7->addWidget(dateArrivee_Modify);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_DateDepartModify = new QLabel(recherche);
        label_DateDepartModify->setObjectName("label_DateDepartModify");

        verticalLayout_3->addWidget(label_DateDepartModify);

        dateDepart_Modify = new QCalendarWidget(recherche);
        dateDepart_Modify->setObjectName("dateDepart_Modify");
        dateDepart_Modify->setGridVisible(true);
        dateDepart_Modify->setHorizontalHeaderFormat(QCalendarWidget::HorizontalHeaderFormat::SingleLetterDayNames);
        dateDepart_Modify->setVerticalHeaderFormat(QCalendarWidget::VerticalHeaderFormat::NoVerticalHeader);

        verticalLayout_3->addWidget(dateDepart_Modify);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        formLayout_10 = new QFormLayout();
        formLayout_10->setObjectName("formLayout_10");
        label_NbChienModify = new QLabel(recherche);
        label_NbChienModify->setObjectName("label_NbChienModify");

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label_NbChienModify);

        spinBox_NbChienModify = new QSpinBox(recherche);
        spinBox_NbChienModify->setObjectName("spinBox_NbChienModify");

        formLayout_10->setWidget(0, QFormLayout::FieldRole, spinBox_NbChienModify);

        label_NbBoxChienModify = new QLabel(recherche);
        label_NbBoxChienModify->setObjectName("label_NbBoxChienModify");

        formLayout_10->setWidget(1, QFormLayout::LabelRole, label_NbBoxChienModify);

        spinBox_NbBoxChienModify = new QSpinBox(recherche);
        spinBox_NbBoxChienModify->setObjectName("spinBox_NbBoxChienModify");

        formLayout_10->setWidget(1, QFormLayout::FieldRole, spinBox_NbBoxChienModify);


        horizontalLayout_9->addLayout(formLayout_10);

        formLayout_11 = new QFormLayout();
        formLayout_11->setObjectName("formLayout_11");
        label_NbChatModify = new QLabel(recherche);
        label_NbChatModify->setObjectName("label_NbChatModify");

        formLayout_11->setWidget(0, QFormLayout::LabelRole, label_NbChatModify);

        spinBox_NbChatModify = new QSpinBox(recherche);
        spinBox_NbChatModify->setObjectName("spinBox_NbChatModify");

        formLayout_11->setWidget(0, QFormLayout::FieldRole, spinBox_NbChatModify);

        label_NbBoxChatModify = new QLabel(recherche);
        label_NbBoxChatModify->setObjectName("label_NbBoxChatModify");

        formLayout_11->setWidget(1, QFormLayout::LabelRole, label_NbBoxChatModify);

        spinBox_NbBoxChatModify = new QSpinBox(recherche);
        spinBox_NbBoxChatModify->setObjectName("spinBox_NbBoxChatModify");

        formLayout_11->setWidget(1, QFormLayout::FieldRole, spinBox_NbBoxChatModify);


        horizontalLayout_9->addLayout(formLayout_11);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        pushButton_Remove = new QPushButton(recherche);
        pushButton_Remove->setObjectName("pushButton_Remove");

        horizontalLayout_10->addWidget(pushButton_Remove);

        pushButton_Modify = new QPushButton(recherche);
        pushButton_Modify->setObjectName("pushButton_Modify");

        horizontalLayout_10->addWidget(pushButton_Modify);

        pushButton_Cancel = new QPushButton(recherche);
        pushButton_Cancel->setObjectName("pushButton_Cancel");

        horizontalLayout_10->addWidget(pushButton_Cancel);


        verticalLayout_6->addLayout(horizontalLayout_10);


        horizontalLayout_11->addLayout(verticalLayout_6);

        tabWidget->addTab(recherche, QString());
        statsChien = new QWidget();
        statsChien->setObjectName("statsChien");
        statsChien->setFont(font1);
        verticalLayout_10 = new QVBoxLayout(statsChien);
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_ChienMinStats = new QLabel(statsChien);
        label_ChienMinStats->setObjectName("label_ChienMinStats");

        verticalLayout_8->addWidget(label_ChienMinStats);

        dateEdit_ChienMinStats = new QDateEdit(statsChien);
        dateEdit_ChienMinStats->setObjectName("dateEdit_ChienMinStats");

        verticalLayout_8->addWidget(dateEdit_ChienMinStats);


        horizontalLayout_8->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_ChienMaxStats = new QLabel(statsChien);
        label_ChienMaxStats->setObjectName("label_ChienMaxStats");

        verticalLayout_9->addWidget(label_ChienMaxStats);

        dateEdit_ChienMaxStats = new QDateEdit(statsChien);
        dateEdit_ChienMaxStats->setObjectName("dateEdit_ChienMaxStats");

        verticalLayout_9->addWidget(dateEdit_ChienMaxStats);


        horizontalLayout_8->addLayout(verticalLayout_9);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_Spacer1 = new QLabel(statsChien);
        label_Spacer1->setObjectName("label_Spacer1");

        verticalLayout_11->addWidget(label_Spacer1);

        pushButton_RefreshChienStats = new QPushButton(statsChien);
        pushButton_RefreshChienStats->setObjectName("pushButton_RefreshChienStats");

        verticalLayout_11->addWidget(pushButton_RefreshChienStats);


        horizontalLayout_8->addLayout(verticalLayout_11);


        verticalLayout_10->addLayout(horizontalLayout_8);

        widget_HistogrammeChien = new QWidget(statsChien);
        widget_HistogrammeChien->setObjectName("widget_HistogrammeChien");

        verticalLayout_10->addWidget(widget_HistogrammeChien);

        tabWidget->addTab(statsChien, QString());
        statsChat = new QWidget();
        statsChat->setObjectName("statsChat");
        statsChat->setFont(font1);
        verticalLayout_15 = new QVBoxLayout(statsChat);
        verticalLayout_15->setObjectName("verticalLayout_15");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        label_ChatMinStats = new QLabel(statsChat);
        label_ChatMinStats->setObjectName("label_ChatMinStats");

        verticalLayout_13->addWidget(label_ChatMinStats);

        dateEdit_ChatMinStats = new QDateEdit(statsChat);
        dateEdit_ChatMinStats->setObjectName("dateEdit_ChatMinStats");

        verticalLayout_13->addWidget(dateEdit_ChatMinStats);


        horizontalLayout_12->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        label_ChatMaxStats = new QLabel(statsChat);
        label_ChatMaxStats->setObjectName("label_ChatMaxStats");

        verticalLayout_14->addWidget(label_ChatMaxStats);

        dateEdit_ChatMaxStats = new QDateEdit(statsChat);
        dateEdit_ChatMaxStats->setObjectName("dateEdit_ChatMaxStats");

        verticalLayout_14->addWidget(dateEdit_ChatMaxStats);


        horizontalLayout_12->addLayout(verticalLayout_14);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        label_Spacer2 = new QLabel(statsChat);
        label_Spacer2->setObjectName("label_Spacer2");

        verticalLayout_12->addWidget(label_Spacer2);

        pushButton_RefreshChatStats = new QPushButton(statsChat);
        pushButton_RefreshChatStats->setObjectName("pushButton_RefreshChatStats");

        verticalLayout_12->addWidget(pushButton_RefreshChatStats);


        horizontalLayout_12->addLayout(verticalLayout_12);


        verticalLayout_15->addLayout(horizontalLayout_12);

        widget_HistogrammeChat = new QWidget(statsChat);
        widget_HistogrammeChat->setObjectName("widget_HistogrammeChat");

        verticalLayout_15->addWidget(widget_HistogrammeChat);

        tabWidget->addTab(statsChat, QString());
        statsJournee = new QWidget();
        statsJournee->setObjectName("statsJournee");
        statsJournee->setFont(font1);
        horizontalLayout_18 = new QHBoxLayout(statsJournee);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_DateDay = new QLabel(statsJournee);
        label_DateDay->setObjectName("label_DateDay");

        horizontalLayout_14->addWidget(label_DateDay);

        dateEdit_Day = new QDateEdit(statsJournee);
        dateEdit_Day->setObjectName("dateEdit_Day");

        horizontalLayout_14->addWidget(dateEdit_Day);


        verticalLayout_17->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_EntreeDay = new QLabel(statsJournee);
        label_EntreeDay->setObjectName("label_EntreeDay");

        horizontalLayout_15->addWidget(label_EntreeDay);

        label_NbEntreeDay = new QLabel(statsJournee);
        label_NbEntreeDay->setObjectName("label_NbEntreeDay");

        horizontalLayout_15->addWidget(label_NbEntreeDay);


        verticalLayout_17->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_DepartDay = new QLabel(statsJournee);
        label_DepartDay->setObjectName("label_DepartDay");

        horizontalLayout_16->addWidget(label_DepartDay);

        label_NbDepartDay = new QLabel(statsJournee);
        label_NbDepartDay->setObjectName("label_NbDepartDay");

        horizontalLayout_16->addWidget(label_NbDepartDay);


        verticalLayout_17->addLayout(horizontalLayout_16);

        label_Spacer3 = new QLabel(statsJournee);
        label_Spacer3->setObjectName("label_Spacer3");

        verticalLayout_17->addWidget(label_Spacer3);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName("verticalLayout_18");
        label_EntreeTableDay = new QLabel(statsJournee);
        label_EntreeTableDay->setObjectName("label_EntreeTableDay");

        verticalLayout_18->addWidget(label_EntreeTableDay);

        tableWidget_EntreeDay = new QTableWidget(statsJournee);
        if (tableWidget_EntreeDay->columnCount() < 3)
            tableWidget_EntreeDay->setColumnCount(3);
        QFont font3;
        font3.setBold(true);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font3);
        tableWidget_EntreeDay->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font3);
        tableWidget_EntreeDay->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font3);
        tableWidget_EntreeDay->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget_EntreeDay->setObjectName("tableWidget_EntreeDay");
        tableWidget_EntreeDay->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget_EntreeDay->horizontalHeader()->setMinimumSectionSize(35);
        tableWidget_EntreeDay->horizontalHeader()->setStretchLastSection(true);
        tableWidget_EntreeDay->verticalHeader()->setVisible(false);

        verticalLayout_18->addWidget(tableWidget_EntreeDay);


        horizontalLayout_17->addLayout(verticalLayout_18);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName("verticalLayout_19");
        label_DepartTableDay = new QLabel(statsJournee);
        label_DepartTableDay->setObjectName("label_DepartTableDay");

        verticalLayout_19->addWidget(label_DepartTableDay);

        tableWidget_DepartDay = new QTableWidget(statsJournee);
        if (tableWidget_DepartDay->columnCount() < 3)
            tableWidget_DepartDay->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font3);
        tableWidget_DepartDay->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font3);
        tableWidget_DepartDay->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font3);
        tableWidget_DepartDay->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        tableWidget_DepartDay->setObjectName("tableWidget_DepartDay");
        tableWidget_DepartDay->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget_DepartDay->horizontalHeader()->setMinimumSectionSize(35);
        tableWidget_DepartDay->horizontalHeader()->setStretchLastSection(true);
        tableWidget_DepartDay->verticalHeader()->setVisible(false);

        verticalLayout_19->addWidget(tableWidget_DepartDay);


        horizontalLayout_17->addLayout(verticalLayout_19);


        verticalLayout_17->addLayout(horizontalLayout_17);

        pushButton_RefreshDay = new QPushButton(statsJournee);
        pushButton_RefreshDay->setObjectName("pushButton_RefreshDay");

        verticalLayout_17->addWidget(pushButton_RefreshDay);


        horizontalLayout_18->addLayout(verticalLayout_17);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        widget_PieChart = new QWidget(statsJournee);
        widget_PieChart->setObjectName("widget_PieChart");

        verticalLayout_16->addWidget(widget_PieChart);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        widget_BoxChienDay = new QWidget(statsJournee);
        widget_BoxChienDay->setObjectName("widget_BoxChienDay");

        horizontalLayout_13->addWidget(widget_BoxChienDay);

        widget_BoxChatDay = new QWidget(statsJournee);
        widget_BoxChatDay->setObjectName("widget_BoxChatDay");

        horizontalLayout_13->addWidget(widget_BoxChatDay);


        verticalLayout_16->addLayout(horizontalLayout_13);


        horizontalLayout_18->addLayout(verticalLayout_16);

        tabWidget->addTab(statsJournee, QString());
        Black_list = new QWidget();
        Black_list->setObjectName("Black_list");
        Black_list->setFont(font1);
        horizontalLayout_21 = new QHBoxLayout(Black_list);
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName("verticalLayout_20");
        label_NameBlackList = new QLabel(Black_list);
        label_NameBlackList->setObjectName("label_NameBlackList");

        verticalLayout_20->addWidget(label_NameBlackList);

        lineEdit_NameBlackList = new QLineEdit(Black_list);
        lineEdit_NameBlackList->setObjectName("lineEdit_NameBlackList");

        verticalLayout_20->addWidget(lineEdit_NameBlackList);

        label_DescBlackList = new QLabel(Black_list);
        label_DescBlackList->setObjectName("label_DescBlackList");

        verticalLayout_20->addWidget(label_DescBlackList);

        textEdit_DescBlackList = new QTextEdit(Black_list);
        textEdit_DescBlackList->setObjectName("textEdit_DescBlackList");

        verticalLayout_20->addWidget(textEdit_DescBlackList);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        pushButton_AddBlackList = new QPushButton(Black_list);
        pushButton_AddBlackList->setObjectName("pushButton_AddBlackList");

        horizontalLayout_19->addWidget(pushButton_AddBlackList);

        pushButton_RemoveBlackList = new QPushButton(Black_list);
        pushButton_RemoveBlackList->setObjectName("pushButton_RemoveBlackList");

        horizontalLayout_19->addWidget(pushButton_RemoveBlackList);

        pushButton_ModifyBlackList = new QPushButton(Black_list);
        pushButton_ModifyBlackList->setObjectName("pushButton_ModifyBlackList");

        horizontalLayout_19->addWidget(pushButton_ModifyBlackList);

        pushButton_CancelBlackList = new QPushButton(Black_list);
        pushButton_CancelBlackList->setObjectName("pushButton_CancelBlackList");

        horizontalLayout_19->addWidget(pushButton_CancelBlackList);


        verticalLayout_20->addLayout(horizontalLayout_19);


        horizontalLayout_21->addLayout(verticalLayout_20);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName("verticalLayout_21");
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        lineEdit_SearchBlackList = new QLineEdit(Black_list);
        lineEdit_SearchBlackList->setObjectName("lineEdit_SearchBlackList");

        horizontalLayout_20->addWidget(lineEdit_SearchBlackList);

        pushButton_SearchBlackList = new QPushButton(Black_list);
        pushButton_SearchBlackList->setObjectName("pushButton_SearchBlackList");

        horizontalLayout_20->addWidget(pushButton_SearchBlackList);


        verticalLayout_21->addLayout(horizontalLayout_20);

        tableWidget_SearchBlackList = new QTableWidget(Black_list);
        if (tableWidget_SearchBlackList->columnCount() < 2)
            tableWidget_SearchBlackList->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font3);
        tableWidget_SearchBlackList->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font3);
        tableWidget_SearchBlackList->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        tableWidget_SearchBlackList->setObjectName("tableWidget_SearchBlackList");
        tableWidget_SearchBlackList->horizontalHeader()->setVisible(true);
        tableWidget_SearchBlackList->horizontalHeader()->setStretchLastSection(true);
        tableWidget_SearchBlackList->verticalHeader()->setVisible(false);

        verticalLayout_21->addWidget(tableWidget_SearchBlackList);


        horizontalLayout_21->addLayout(verticalLayout_21);

        tabWidget->addTab(Black_list, QString());

        horizontalLayout->addWidget(tabWidget);

        TableurChenil->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TableurChenil);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1202, 21));
        TableurChenil->setMenuBar(menubar);
        statusbar = new QStatusBar(TableurChenil);
        statusbar->setObjectName("statusbar");
        TableurChenil->setStatusBar(statusbar);

        retranslateUi(TableurChenil);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TableurChenil);
    } // setupUi

    void retranslateUi(QMainWindow *TableurChenil)
    {
        TableurChenil->setWindowTitle(QCoreApplication::translate("TableurChenil", "TableurChenil", nullptr));
        label_NomReservation->setText(QCoreApplication::translate("TableurChenil", "Nom :", nullptr));
        label_DateArriveeReservation->setText(QCoreApplication::translate("TableurChenil", "Date d'arriv\303\251e :", nullptr));
        label_DateDepartReservation->setText(QCoreApplication::translate("TableurChenil", "Date de d\303\251part :", nullptr));
        label_ChienReservation->setText(QCoreApplication::translate("TableurChenil", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700; text-decoration: underline;\">Chien :</span></p></body></html>", nullptr));
        label_ChatReservation->setText(QCoreApplication::translate("TableurChenil", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700; text-decoration: underline;\">Chat :</span></p></body></html>", nullptr));
        label_NbChienReservation->setText(QCoreApplication::translate("TableurChenil", "Nombre de chien :", nullptr));
        label_NbBoxChienReservation->setText(QCoreApplication::translate("TableurChenil", "Nombre de Box pour chien :", nullptr));
        label_NbChatReservation->setText(QCoreApplication::translate("TableurChenil", "Nombre de chat :", nullptr));
        label_NbBoxChatReservation->setText(QCoreApplication::translate("TableurChenil", "Nombre de box pour chat :", nullptr));
        pushButton_AddReservation->setText(QCoreApplication::translate("TableurChenil", "Ajouter", nullptr));
        pushButton_ClearReservation->setText(QCoreApplication::translate("TableurChenil", "Annuler", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(reservation), QCoreApplication::translate("TableurChenil", "Reservation", nullptr));
        pushButton_Search->setText(QCoreApplication::translate("TableurChenil", "   Rechercher   ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_Search->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TableurChenil", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_Search->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TableurChenil", "Arriv\303\251e", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_Search->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TableurChenil", "D\303\251part", nullptr));
        label_TitreModify->setText(QCoreApplication::translate("TableurChenil", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; text-decoration: underline;\">Modification :</span></p></body></html>", nullptr));
        label_NomModify->setText(QCoreApplication::translate("TableurChenil", "Nom :", nullptr));
        label_DateArriveeModify->setText(QCoreApplication::translate("TableurChenil", "Date d'arriv\303\251e :", nullptr));
        label_DateDepartModify->setText(QCoreApplication::translate("TableurChenil", "Date de d\303\251part :", nullptr));
        label_NbChienModify->setText(QCoreApplication::translate("TableurChenil", "Nombre de chien :", nullptr));
        label_NbBoxChienModify->setText(QCoreApplication::translate("TableurChenil", "Nombre de Box pour chien :", nullptr));
        label_NbChatModify->setText(QCoreApplication::translate("TableurChenil", "Nombre de chat :", nullptr));
        label_NbBoxChatModify->setText(QCoreApplication::translate("TableurChenil", "Nombre de box pour chat :", nullptr));
        pushButton_Remove->setText(QCoreApplication::translate("TableurChenil", "Retirer", nullptr));
        pushButton_Modify->setText(QCoreApplication::translate("TableurChenil", "Modifier", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("TableurChenil", "Annuler", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(recherche), QCoreApplication::translate("TableurChenil", "Recherche", nullptr));
        label_ChienMinStats->setText(QCoreApplication::translate("TableurChenil", "Du :", nullptr));
        label_ChienMaxStats->setText(QCoreApplication::translate("TableurChenil", "Au :", nullptr));
        label_Spacer1->setText(QString());
        pushButton_RefreshChienStats->setText(QCoreApplication::translate("TableurChenil", "Actualiser", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(statsChien), QCoreApplication::translate("TableurChenil", "Chien", nullptr));
        label_ChatMinStats->setText(QCoreApplication::translate("TableurChenil", "Du :", nullptr));
        label_ChatMaxStats->setText(QCoreApplication::translate("TableurChenil", "Au :", nullptr));
        label_Spacer2->setText(QString());
        pushButton_RefreshChatStats->setText(QCoreApplication::translate("TableurChenil", "Actualiser", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(statsChat), QCoreApplication::translate("TableurChenil", "Chat", nullptr));
        label_DateDay->setText(QCoreApplication::translate("TableurChenil", "Date :", nullptr));
        label_EntreeDay->setText(QCoreApplication::translate("TableurChenil", "Nombre d'entr\303\251e :", nullptr));
        label_NbEntreeDay->setText(QCoreApplication::translate("TableurChenil", "...", nullptr));
        label_DepartDay->setText(QCoreApplication::translate("TableurChenil", "Nombre de d\303\251part :", nullptr));
        label_NbDepartDay->setText(QCoreApplication::translate("TableurChenil", "...", nullptr));
        label_Spacer3->setText(QString());
        label_EntreeTableDay->setText(QCoreApplication::translate("TableurChenil", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Entr\303\251e :</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_EntreeDay->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TableurChenil", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_EntreeDay->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("TableurChenil", "Arriv\303\251e", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_EntreeDay->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("TableurChenil", "D\303\251part", nullptr));
        label_DepartTableDay->setText(QCoreApplication::translate("TableurChenil", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">D\303\251part :</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_DepartDay->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("TableurChenil", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_DepartDay->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("TableurChenil", "Arriv\303\251e", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_DepartDay->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("TableurChenil", "D\303\251part", nullptr));
        pushButton_RefreshDay->setText(QCoreApplication::translate("TableurChenil", "Actualiser", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(statsJournee), QCoreApplication::translate("TableurChenil", "Journ\303\251e", nullptr));
        label_NameBlackList->setText(QCoreApplication::translate("TableurChenil", "Nom :", nullptr));
        label_DescBlackList->setText(QCoreApplication::translate("TableurChenil", "Description :", nullptr));
        pushButton_AddBlackList->setText(QCoreApplication::translate("TableurChenil", "Ajouter", nullptr));
        pushButton_RemoveBlackList->setText(QCoreApplication::translate("TableurChenil", "Retirer", nullptr));
        pushButton_ModifyBlackList->setText(QCoreApplication::translate("TableurChenil", "Modifier", nullptr));
        pushButton_CancelBlackList->setText(QCoreApplication::translate("TableurChenil", "Annuler", nullptr));
        pushButton_SearchBlackList->setText(QCoreApplication::translate("TableurChenil", "   Rechercher   ", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_SearchBlackList->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("TableurChenil", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_SearchBlackList->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("TableurChenil", "Description", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Black_list), QCoreApplication::translate("TableurChenil", "Black list", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableurChenil: public Ui_TableurChenil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEURCHENIL_H
