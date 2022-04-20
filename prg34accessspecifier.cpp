#include <iostream>
using namespace std;
class Base
{
private:
    int pvt = 1;

protected:
    int prot = 2;

public:
    int pub = 3;
    int getPVT()
    {
        return pvt;
    }
};
class publicDerived : public Base
{
public:
    int getprot()
    {
        return prot;
    }
    int getpublic()
    {
        return pub;
    }
};
int main()
{
    publicDerived object1;
    // cout<<"private="<<object1.getPVT()<<endl;
    cout << "protected=" << object1.getprot() << endl;
    cout << "public=" << object1.pub << endl;
}