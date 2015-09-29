#ifndef POLAR
#define POLAR
#include "abstract.h"
#include "vector"

using namespace std;

class Polar : public Abstract
{
public:
    int count() override
    {
    numbers.assign(7,100);
    return numbers.size();
    }
private:
    vector <int> numbers;
};

#endif // POLAR

