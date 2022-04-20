1#include <iostream>
using namespace std;
class area
{
public:
    float area_calc(float l, float b)
    {
        return l * b;
    }
};
class perimeter
{
public:
    float peri_calc(float l, float b)
    {
        return 2 * (l + b);
    }
};
class Rectangle : private area, private perimeter
{
private:
    float length, breadth;

public:
    Rectangle() : length(0.0), breadth(0.0) {}
    void getdata()
    {
        cout << "Enter Length:";
        cin >> length;
        cout << "Enter Breadth:";
        cin >> breadth;
    }
    float area_calc()
    {
        return area::area_calc(length, breadth);
    }
    float peri_calc()
    {
        return perimeter::peri_calc(length, breadth);
    }
};
int main()
{
    Rectangle r;
    r.getdata();
    cout << "\n\n";
    cout << "Area:" << r.area_calc();
    cout << "\nPerimeter:" << r.peri_calc();
}