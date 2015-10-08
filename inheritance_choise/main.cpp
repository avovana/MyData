#include <QDebug>
#include <calculation.h>
#include <form.h>

int main()
{

    Calculation calc;
    Form form;
    QObject::connect(&calc, &Calculation::test, &form, &Form::onTest);
    emit calc.test();


    return 0;
}



