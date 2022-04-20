#include <iostream>
using namespace std;
class Test
{
    // by default Private
    int x = 20;

public:
    int a = 10, b, y;
};
int main()
{
    Test t1;
    cout << "\na:" << t1.a;
    //    cout<<"\nx:"<<t2.x;   //error
}

// int x;
// Test--Class, t1--Object
// Access Specifier--Private,Public