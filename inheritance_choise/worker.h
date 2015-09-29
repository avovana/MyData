#ifndef WORKER_H
#define WORKER_H
class Abstract;

class Worker
{
public:
    enum Machine
    {
        PolarMachine = 11,
        ItotecMachine = 12
    };

    Worker();
    Abstract *choice(Machine machine);
};

#endif // WORKER_H
