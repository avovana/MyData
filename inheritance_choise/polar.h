#ifndef POLAR
#define POLAR
#include "abstract.h"
#include "vector"

using namespace std;

class Polar : public Abstract
{
public:
    Polar()
    {
        cout <<"Object 'Polar' has been created" << endl;
    };

    ~Polar()
    {
        cout <<"Object 'Polar' has been removed" << endl;
    };
    int count(int test = 17) override
    {
        cout << test << endl;
        numbers.assign(7,100);
        return numbers.size();
    }
private:
    vector <int> numbers;
};

#endif // POLAR

