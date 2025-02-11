#ifndef VIEWCLIENTLIST_H
#define VIEWCLIENTLIST_H
#include <QListWidget>
#include <QLineEdit>
#include <QTableWidget>
#include "data.h"
#include "observer.h"

class ViewClientList : public Observer
{
private:
    Data* data;
    QTableWidget* liste;
    QLineEdit* input_search;
public:
    ViewClientList(Data*, QTableWidget*, QLineEdit*);
    void updateModel() override;
    void addRow(Client*);
public slots:
    void search();
};

#endif // VIEWCLIENTLIST_H
