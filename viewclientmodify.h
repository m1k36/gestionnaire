#ifndef VIEWCLIENTMODIFY_H
#define VIEWCLIENTMODIFY_H
#include <QLineEdit>
#include <QCalendarWidget>
#include <QSpinBox>
#include <QListWidgetItem>
#include <QTableWidgetItem>
#include <QLayout>
#include "observer.h"
#include "data.h"
#include "controller.h"

class ViewClientModify : public Observer
{
private:
    Data* data;
    int clientModifyId;
    QList<QLayout*> layouts;
    QLineEdit* input_nameModify;
    QCalendarWidget* input_arriveeModify;
    QCalendarWidget* input_departModify;
    QSpinBox* input_nbChienModify;
    QSpinBox* input_nbChatModify;
    QSpinBox* input_nbBoxChienModify;
    QSpinBox* input_nbBoxChatModify;
public:
    ViewClientModify(Data*, QList<QLayout*>, QLineEdit*, QCalendarWidget*, QCalendarWidget*, QSpinBox*, QSpinBox*, QSpinBox*, QSpinBox*);
    void updateModel() override;
    void setVisibleLayouts(bool);
public slots:
    void itemPressed(QTableWidgetItem*);
    void modify();
    void remove();
};

#endif // VIEWCLIENTMODIFY_H
