#include <QDebug>
#include <calculation.h>
#include <form.h>
#include <conio.h>
#include <QTcpSocket>
#include <QTimer>
#include <QObject>
#include <QCoreApplication>

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv); //цикл обработки событий Qt
    Calculation calc;
    Form form;
    QObject::connect(&calc, &Calculation::test, &form, &Form::onTest);
    emit calc.test();

    QTimer::singleShot(500, &form, &Form::onTest);  //статическая функция


    QTimer* ptimer = new QTimer(&form);
    QObject::connect(ptimer, &QTimer::timeout,  &form, &Form::onTest); //использовать этот синтаксис
    ptimer->start(1000);
    //ptimer->singleShot(true);

    return app.exec();
}



