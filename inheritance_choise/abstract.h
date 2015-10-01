#ifndef ABSTRACT
#define ABSTRACT
#include <iostream>
using namespace std;

class Abstract {
public:
    virtual int count(int test = 15) = 0;
    Abstract()
    {
        cout <<"Object 'Abstract' has been created" << endl;
    };
    virtual ~Abstract()
    {
        cout <<"Object 'Abstract' has been removed" << endl;
    };
};

#endif // ABSTRACT

