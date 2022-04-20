#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float pi;
    pi = 3.1415169;
    cout << setprecision(2) << pi << endl;
    cout << setprecision(3) << pi << endl;
    cout << setprecision(4) << pi << endl;
    cout << setprecision(5) << pi << endl;
    cout << setprecision(6) << pi << endl;
}