#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QDate>
#include "data.h"
#include "client.h"

class ControllerAdd
{
private:
    Data* data;
public:
    ControllerAdd(Data*);
    void control(QString, QDate, QDate, int, int, int, int);
};

class ControllerModify
{
private:
    Data* data;
public:
    ControllerModify(Data*);
    void control(int, QString, QDate, QDate, int, int, int, int);
};

class ControllerRemove
{
private:
    Data* data;
public:
    ControllerRemove(Data*);
    void control(int);
};

class ControllerAddBlackClient
{
private:
    Data* data;
public:
    ControllerAddBlackClient(Data*);
    void control(QString, QString);
};

class ControllerModifyBlackClient
{
private:
    Data* data;
public:
    ControllerModifyBlackClient(Data*);
    void control(int, QString, QString);
};

class ControllerRemoveBlackClient
{
private:
    Data* data;
public:
    ControllerRemoveBlackClient(Data*);
    void control(int);
};

#endif // CONTROLLER_H
