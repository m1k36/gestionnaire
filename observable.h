#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include "observer.h"
#include <qvector.h>

class Observable {
private:
    QVector<Observer*> observers;
public:
    virtual ~Observable() {}
    virtual void addObserver(Observer* observer) { observers.append(observer); }
    virtual void removeObserver(Observer* observer) { observers.removeAll(observer); }
    virtual void notifyObserver() const { for (Observer* obs : observers) obs->updateModel(); }
};


#endif // OBSERVABLE_H
