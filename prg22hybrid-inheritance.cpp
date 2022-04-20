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
class derived1 : public base1
{
public:
    derived1()
    {
        cout << "\nDerived1 Class Constructor";
    }
};
class derived2 : public base1
{
public:
    derived2()
    {
        cout << "\nDerived2 Class Constructor";
    }
};
class derived3 : public derived1, public derived2
{
public:
    derived3()
    {
        cout << "\nDerived3 Class Constructor Called";
    }
};
int main()
{
    derived3 d3;
}