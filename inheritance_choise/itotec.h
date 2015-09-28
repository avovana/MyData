#ifndef ITOTEC
#define ITOTEC
#include "abstract.h"
#include "vector"

using namespace std;

class Itotec : Abstract
{
public:
    int count() override
    {
    numbers.assign(5,100);
    return numbers.size();
    }
private:
    vector <int> numbers;
};

#endif // ITOTEC

