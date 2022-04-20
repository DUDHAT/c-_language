#include <iostream>
using namespace std;
class Test
{
    // by default private
    int x;

public:
    int getter()
    {
        return x;
    }
    void setter(int x1)
    {
        x = x1;
    }
};
int main()
{
    Test t1;
    t1.setter(10);
    cout << "\nx:" << t1.getter();
}