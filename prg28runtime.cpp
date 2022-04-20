#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout << "Base Class is Involked" << endl;
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "Derived Class is Involked" << endl;
    }
};
int main()
{
    Base *p, b;
    Derived d;
    p = &b; // Base
    p->display();
    p = &d; // Derived
    p->display();
    // Base b;
    // b.display();
    // Derived d;
    // d.display();
}