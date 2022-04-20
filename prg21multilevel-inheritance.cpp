#include <iostream>
using namespace std;
class base1
{
public:
    base1()
    {
        cout << "\nBase1 Class Constructor Called";
    }
};
class derived : public base1
{
public:
    derived()
    {
        cout << "\nDerived Class Constructor Called";
    }
};
class base2 : public derived
{
public:
    base2()
    {
        cout << "\nBase2 Class Constructor Called";
    }
};
int main()
{
    base2 b;
}