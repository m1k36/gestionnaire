#ifndef OBSERVER_H
#define OBSERVER_H
#include <QString>
#include <QObject>

class Observer : public QObject
{
public:
    virtual ~Observer() {}
    virtual void updateModel() = 0;
};


#endif // OBSERVER_H
