#include <iostream>
using namespace std;
class math
{
public:
    void showchoice()
    {
        cout << "Menu" << endl;
        cout << "1.Add" << endl;
        cout << "2.Subtract" << endl;
        cout << "3.Multiply" << endl;
        cout << "4.Divide" << endl;
        cout << "5.Exit" << endl;
        cout << "Enter your choice:";
    }
    float add(float a, float b)
    {
        return a + b;
    }
    float subtract(float a, float b)
    {
        return a - b;
    }
    float multiply(float a, float b)
    {
        return a * b;
    }
    float divide(float a, float b)
    {
        return a / b;
    }
};
int main()
{
    math cal;
    float x, y;
    int choice;
    do
    {
        cal.showchoice();
        cin >> choice;
        switch (choice) // one type of else if condition(shortcut)
        {
        case 1:
            cout << "Enter two Number:";
            cin >> x >> y;
            cout << "sum:" << cal.add(x, y) << endl;
            break;
        case 2:
            cout << "Enter two Number:";
            cin >> x >> y;
            cout << "Diffrence" << cal.subtract(x, y) << endl;
            break;
        case 3:
            cout << "Enter two Number:";
            cin >> x >> y;
            cout << "Product" << cal.multiply(x, y) << endl;
            break;
        case 4:
            cout << "Enter two Number:";
            cin >> x >> y;
            cout << "Quotient" << cal.divide(x, y) << endl;
            break;
        case 5:
            break;
        default:
            cout << "Invalid input" << endl;
        }
    } while (choice != 5);
    return 0;
}