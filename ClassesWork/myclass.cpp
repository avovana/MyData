#include "myclass.h"

MyClass::MyClass(int ustanovkaz)
{
    m_z = ustanovkaz;
}

void MyClass::setZ(int peremen)
{
    m_z = peremen;
}

int MyClass::getZ() const
{
    return m_z;
}

