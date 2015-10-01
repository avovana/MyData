#ifndef ITOTEC
#define ITOTEC
#include "abstract.h"
#include "vector"

using namespace std;

class Itotec : public Abstract
{
public:
    Itotec()
    {
        cout <<"Object 'Itotec' has been created" << endl;
    };
    ~Itotec()
    {
        cout <<"Object 'Itotec' has been removed" << endl;
    };
    int count(int test = 16) override
    {
        cout << test << endl;
        numbers.assign(5,100);
        return numbers.size();
    }
private:
    vector <int> numbers;
};

#endif // ITOTEC

