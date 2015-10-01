#ifndef WORKER_H
#define WORKER_H
#include <iostream>
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
    Abstract *choice(Machine machine);
};

#endif // WORKER_H
