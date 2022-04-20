#include <iostream>
using namespace std;
class loc
{
    int longitude, latitude;

public:
    loc()
    {
    }
    loc(int a, int b)
    {
        longitude = a;
        latitude = b;
    }
    loc operator+(loc obj2);
    void show()
    {
        cout << longitude
             << " ";
        cout << latitude << endl;
    }
};
loc loc::operator+(loc obj2)
{
    loc temp;
    temp.longitude = longitude + obj2.longitude;
    temp.latitude = latitude + obj2.latitude;
    return temp;
}
int main()
{
    loc obj1(10, 20), obj2(5, 30), obj3;
    obj1.show();
    obj2.show();
    obj3 = obj1 + obj2;
    obj3.show();
}
