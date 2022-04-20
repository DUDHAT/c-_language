#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "\n Base Class Constructor called";
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "\n Derived Class Constructor Called";
    }
};
int main()
{
    derived d;
}