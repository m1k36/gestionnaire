#ifndef VIEWBLACKLIST_H
#define VIEWBLACKLIST_H
#include <QLineEdit>
#include <QTableWidget>
#include <QPushButton>
#include <QTextEdit>
#include "data.h"
#include "observer.h"
#include "controller.h"

class ViewBlackList : public Observer
{
private:
    Data* data;
    int clientModifyId;
    QTableWidget* liste;
    QLineEdit* input_search;
    QLineEdit* input_name;
    QTextEdit* input_description;
    QPushButton* button_add;
    QPushButton* button_remove;
    QPushButton* button_modify;
public:
    ViewBlackList(Data*, QTableWidget*, QLineEdit*, QLineEdit*, QTextEdit*, QPushButton*, QPushButton*, QPushButton*);
    void updateModel() override;
    void addRow(BlackClient*);
public slots:
    void itemPressed(QTableWidgetItem*);
    void modify();
    void remove();
    void add();
    void search();
};

#endif // VIEWBLACKLIST_H
