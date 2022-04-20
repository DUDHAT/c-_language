#include <iostream>
using namespace std;
class bank
{
public:
    int balance;
    void setdata(int a)
    {
        balance = a;
        cout << "Initial Balance:" << balance << endl;
    }
    int withdraw(int a)
    {
        if (a > balance)
        {
            cout << "Insufficient Balance" << endl;
            exit(0);
        }
        else
        {
            balance -= a;
            return balance;
        }
    }
    int diposite(int a)
    {
        balance += a;
        return balance;
    }
    int fbalance()
    {
        return balance;
    }
};
class saving_account : public bank
{
public:
    saving_account(int a)
    {
        setdata(a);
    }
    int diposite(int a)
    {
        return bank::diposite(a);
    }
    int withdraw(int a)
    {
        return bank::withdraw(a);
    }
    int fbalance()
    {
        return bank::fbalance();
    }
    void makechoice()
    {
        cout << "Please Choice from Menu" << endl;
        cout << "1:Withdrawal" << endl;
        cout << "2:Diposite" << endl;
        cout << "9:Current Balance" << endl;
        cout << "0:Exit" << endl;
    }
};
int main()
{
    cout << "Welcome In Banking" << endl;
    int choice, x, a;
    saving_account c1(1000);
    do
    {
        c1.makechoice();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Withdrawal Amount:" << endl;
            cin >> a;
            x = c1.withdraw(a);
            cout << "Total Balance After Withdrawal:" << x << endl;
            break;
        case 2:
            cout << "Enter Diposite Amount:" << endl;
            cin >> a;
            cout << "Total Balance After Diposite:" << c1.diposite(a) << endl;
            break;
        case 9:
            cout << "Current Balance:" << c1.fbalance() << endl;
            cin >> a;
            break;
        case 0:
            break;
        }
    } while (choice != 0);
    cout << "Thank You For Banking";
}