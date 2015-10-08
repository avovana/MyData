#ifndef CALCULATION
#define CALCULATION
#include <QObject>

class Calculation : public QObject
{
Q_OBJECT
signals:
    void test();
};
#endif // CALCULATION

