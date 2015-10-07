#include <iostream>
#include "abstract.h"
#include "worker.h"
#include <QDebug>
#include <QScopedPointer>
#include <QSharedPointer>

using namespace std;

int main()
{
    char ch;
    Worker::Machine isPolar = Worker::PolarMachine;
    QSharedPointer<Abstract> cutter;
    QSharedPointer<Abstract> cutterCopy;
    QScopedPointer<Worker> worker(new Worker());

    qDebug() << "Please, input 'p' for Polar and 'i' for Itotec";
    cin >> ch;

    switch (ch) {
    case 'p':
        isPolar = Worker::PolarMachine;
        break;
    case 'i':
        isPolar = Worker::ItotecMachine;
        break;
    default:

        break;
    }
    cutter = worker->choice(isPolar);
    cutterCopy = cutter;
    QWeakPointer<Abstract> cutterWeak = cutterCopy.toWeakRef();
    if (!cutter.isNull());
        cout << cutter->count();
    cout << endl;
    return 0;
}



