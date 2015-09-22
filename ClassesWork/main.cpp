#include <iostream>
#include <string>
#include "myclass.h"
#include "superclass.h"
#include "daosizm.h"


int main()
{
    Daosizm daosizm;
    daosizm.barter();

    MyClass *myClass = new MyClass(2);
    std::cout << myClass->getZ();
    delete myClass;

    SuperClass superClass;
    superClass.setX(2);

    return 0;
}

