#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    point(point &p2)
    {
        x = p2.x;
        y = p2.y;
    }
    int getX();
    int getY();
};
int point ::getX() // :: Scope Resolution Operator
{
    return x;
}
int point ::getY()
{
    return y;
}
int main()
{
    point objpoint1(10, 20);
    point objpoint2 = objpoint1; // Object Assignment
    cout << "objpoint1.x:" << objpoint1.getX() << " objpoint1.y:" << objpoint1.getY() << endl
         << endl;
    cout << "objpoint2.x:" << objpoint2.getX() << " objpoint2.y:" << objpoint2.getY() << endl;
}