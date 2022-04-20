#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "\nBase Class Constructor Called";
    }
};
class derived1 : public base
{
public:
    derived1()
    {
        cout << "\nDerived1 class Constructor Called";
    }
};
class derived2 : public base
{
public:
    derived2()
    {
        cout << "\nDerived2 Class Constructor Called";
    }
};
class derived3 : public base
{
public:
    derived3()
    {
        cout << "\nDerived3 Class Constructor Called";
    }
};
int main()
{
    derived1(), derived2(), derived3();
}