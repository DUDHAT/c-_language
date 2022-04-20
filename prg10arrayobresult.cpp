#include <iostream>
using namespace std;
class result
{
    int r, sub1, sub2, sub3, total, per;
    string name;

public:
    void setdata()
    {
        cout << "Student Name:" << endl;
        cin >> name;
        cout << "Roll no." << endl;
        cin >> r;
        cout << "Maths:" << endl;
        cin >> sub1;
        cout << "Physics:" << endl;
        cin >> sub2;
        cout << "Chemistry:" << endl;
        cin >> sub3;
        total = sub1 + sub2 + sub3;
    }
    void getdata()
    {
        cout << "Student Name:" << name << endl;
        cout << "Roll no:" << r << endl;
        cout << "Maths:" << sub1 << endl;
        cout << "Physics:" << sub2 << endl;
        cout << "Chemistry:" << sub3 << endl;
        cout << "Total=" << total << endl;
        if (sub1 < 34 || sub2 < 34 || sub3 < 34)
            cout << "Fail" << endl;
        else
        {
            per = total / 3;
            cout << "Percentage:" << per << endl;
            if (per <= 100 && per >= 75)
                cout << "A grade" << endl;
            else if (per <= 75 && per >= 60)
                cout << "B Grade" << endl;
            else if (per <= 60 && per >= 45)
                cout << "C Grade" << endl;
            else if (per <= 45 && per >= 35)
                cout << "D Grade" << endl;
            else if (per <= 35 && per >= 0)
                cout << "Fail" << endl;
        }
    }
};
int main()
{
    result grade[5];
    int i;
    for (i = 0; i < 3; i++)
        grade[i].setdata();
    for (i = 0; i < 3; i++)
        grade[i].getdata();
}