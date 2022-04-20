#include <iostream>
using namespace std;
class shape
{
protected:
    float width;
    float height;

public:
    virtual float getArea() = 0;
    // fflush(stdin);
    void setwidth(float W)
    {
        width = W;
    }
    void setheight(float H)
    {
        height = H;
    }
};
class Rectangle : public shape
{
public:
    float getArea()
    {
        return (width * height);
    }
};
class Triangle : public shape
{
public:
    float getArea()
    {
        return (width * height) / 2;
    }
};
int main()
{
    Rectangle Rect;
    Triangle Tri;
    Rect.setwidth(5);
    Rect.setheight(7);
    cout << "Total Rectangle Area:" << Rect.getArea() << endl;
    Tri.setwidth(5);
    Tri.setheight(7);
    cout << "Total Triangle Area:" << Tri.getArea() << endl;
}