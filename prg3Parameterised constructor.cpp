#include <iostream>
using namespace std;
class bike
{
    string name;
    string brand;

public:
    bike(string n, string b)
    {
        name = n;
        brand = b;
    }
    void mybike()
    {
        cout << "\n"
             << brand << "\n"
             << name;
    }
};
int main()
{
    bike bhavin("passion", "hero"), yaman("activa", "honda");
    bhavin.mybike();
    yaman.mybike();
}