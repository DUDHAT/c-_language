#include <iostream>
using namespace std;
class test
{
    int n, m;

public:
    test(int n, int m)
    {
        cout << "\nthis:" << this;
        this->n = n;
        this->m = m;
    }
    void getval()
    {
        cout << "\nn:" << n;
        cout << "\nm:" << m;
    }
};
int main()
{
    test t1(12, 13), t2(15, 16);
    cout << "\nt1:" << addressof(t1);
    cout << "\nt2:" << addressof(t2);
    t1.getval();
    t2.getval();
}