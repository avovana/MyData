#include <iostream>
#include "abstract.h"
#include "worker.h"
#include <QDebug>

using namespace std;

int main()
{
    char ch;
    Worker::Machine isPolar = Worker::PolarMachine;
    Abstract *cutter = nullptr;
    Worker *worker = new Worker();

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
cout << cutter->count();
cout << endl;
delete worker;
cout << endl;
delete cutter;
        return 0;
}



