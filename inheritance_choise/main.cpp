#include <iostream>
#include "polar.h"
#include "itotec.h"
#include "abstract.h"

using namespace std;

void choise(bool isPolar, Abstract *pointer);

int main()
{
    char ch;
    bool isPolar;
    Abstract *cutter = nullptr;
    input:
    cout<<"Please, input 'p' for Polar and 'i' for Itotec"<<endl;
    cin>>ch;

    switch (ch) {
    case 'p':
        isPolar=1;
        break;
    case 'i':
        isPolar=0;
        break;
    default:
        goto input;
        break;
    }

    return 0;
}
/*
void choise(bool isPolar, Abstract *pointer)
{

    pointer = new Polar();


}
*/
