#include <iostream>
#include "polar.h"
#include "itotec.h"
#include "abstract.h"

using namespace std;

Abstract *choise(bool isPolar);

int main()
{
    char ch;
    bool isPolar;
    Abstract *cutter = nullptr;

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

        break;
    }

cutter = choise(isPolar);
cout << cutter->count();
        return 0;
}

Abstract *choise(bool isPolar)
{
    if(isPolar)
        return new Polar();
    else
        return new Itotec();

}

