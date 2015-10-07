#include "worker.h"
#include "polar.h"
#include "itotec.h"

QSharedPointer<Abstract> Worker::choice(Machine machine)
{
    switch (machine)
    {
    case PolarMachine:
        return QSharedPointer<Polar>::create();
        break;
    case ItotecMachine:
        return QSharedPointer<Itotec>::create();
        break;

    default:
        break;
    }
return QSharedPointer<Abstract>();
}
