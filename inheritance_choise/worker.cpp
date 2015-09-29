#include "worker.h"
#include "polar.h"
#include "itotec.h"

Worker::Worker()
{

}

Abstract *Worker::choice(Machine machine)
{
    switch (machine)
    {
    case PolarMachine:
        return new Polar();
        break;
    case ItotecMachine:
        return new Itotec();
        break;

    default:
        break;
    }
return nullptr;
}
