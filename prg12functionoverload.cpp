#include <iostream>
using namespace std;
class shape
{
public:
    void area(int n)
    {
        cout << "\nArea of Square:" << n;
    }
    void area(double n)
    {
        cout << "\nSquare:" << n * n * 3.14;
    }
    void area(int base, int height)
    {
        cout << "\nArea of Triangle:" << 0.5 * base * height;
    }
};
int main()
{
    shape circle, square, triangle;
    circle.area(3);
    square.area(5.0);
    triangle.area(10, 10);
}