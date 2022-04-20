#include <iostream>
using namespace std;
class test
{
    int n;

public:
    test(int i) // default constructor
    {
        cout << "\nconstructor called..." << i;
        n = i;
    }
    ~test() // default destructor
    {
        cout << "\ndestructor called..." << n;
    }
};
int main()
{
    test t1(1), t3(3), t2(2);
}