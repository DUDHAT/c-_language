#include <iostream>
using namespace std;
class bank
{
    float final_balance;

public:
    bank(float);
    float withdrawmoney(float);
    float dipositemoney(float);
    float finalbalance();
};
bank::bank(float n)
{
    final_balance = n;
}
float bank::withdrawmoney(float a)
{
    final_balance -= a;
    return final_balance;
}
float bank::dipositemoney(float a)
{
    final_balance += a;
    return final_balance;
}
float bank::finalbalance()
{
    return final_balance;
}
int main()
{
    float a, balance;
    int choice;
    cout << "Welcome in Banking" << endl
         << endl;
    bank statement(1000);
    do
    {
        cout << "Please choice from menu" << endl;
        cout << "1:Withdrawal" << endl;
        cout << "2:Diposite" << endl;
        cout << "9:Show Balnace" << endl;
        cout << "0:Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Withdrawal money:" << endl;
            cin >> a;
            cout << "Total Balance after withdrawal:" << statement.withdrawmoney(a) << endl;
            break;
        case 2:
            cout << "Enter Diposite money:" << endl;
            cin >> a;
            cout << "Total Balance after Diposite:" << statement.dipositemoney(a) << endl;
            break;
        case 9:
            cout << "Final Balance is:" << statement.finalbalance() << endl;
            break;
        case 0:
            break;
        }
    } while (choice != 0);
    cout << "Thank you for Banking" << endl;
}
