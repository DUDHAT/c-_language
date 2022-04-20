#include <iostream>
using namespace std;
class test
{
    string name;

public:
    test()
    {
        cout << "Default Constructor." << endl;
    }
    test(int n)
    {
        cout << "One Parameter int:" << n << endl;
    }
    test(int n, int m)
    {
        cout << "Two Parameter int:" << n << "-" << m << endl;
    }
    test(string str)
    {
        cout << "One Parameter string:" << str << endl;
    }
};
int main()
{
    test t1, t2(1), t3(2, 4), t4("Gautam");
}