#ifndef WORKER_H
#define WORKER_H
#include <iostream>
#include <QSharedPointer>
using namespace std;

class Abstract;

class Worker
{
public:
    enum Machine
    {
        PolarMachine = 11,
        ItotecMachine = 12
    };

    Worker()
    {
        cout <<"Object 'Worker' has been created" << endl;
    };

    ~Worker()
    {
        cout <<"Object 'Worker' has been removed" << endl;
    };
    QSharedPointer<Abstract> choice(Machine machine);
};

#endif // WORKER_H
