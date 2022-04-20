#include <iostream>
using namespace std;
#include <math.h>
class bank
{
public:
    float balance;
    string name;
    string account_number;
    void setdata(float a)
    {
        cout << "Account Holder Name:" << endl;
        getline(cin, name);
        cout << "Account Number:" << endl;
        getline(cin, account_number);
        cout << "Acoount Holder Name:" << name << endl;
        cout << "Account Number:" << account_number << endl;
        balance = a;
        cout << "Initial Balance:" << balance << endl;
    }
    float withdraw(float a)
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
    float diposite(float a)
    {
        balance += a;
        return balance;
    }
    float fbalance()
    {
        return balance;
    }
};
class savingaccount : public bank
{
public:
    savingaccount(float a)
    {
        setdata(a);
    }
    float withdraw(float a)
    {
        return bank::withdraw(a);
    }
    float diposite(float a)
    {
        return bank::diposite(a);
    }
    float fbalance()
    {
        return bank::fbalance();
    }
    void makechoice()
    {
        cout << "\nPlease Choice from Menu" << endl;
        cout << "1:Withdrawal" << endl;
        cout << "2:Diposite" << endl;
        cout << "3:Current Balance" << endl;
        cout << "4:Loan and EMI" << endl;
        cout << "5:Reccuring Diposite" << endl;
        cout << "0:Exit" << endl;
    }
};
class loan
{
private:
    float p, r, EMI, Total_INTEREST, TotalLoan;
    float n;

public:
    void setvalue()
    {
        cout << "\nEnter Your Loan Amount :";
        cin >> p;
        cout << "\nEnter Interst Rate :";
        cin >> r;
        cout << "\nEnter Loan Time in year :";
        cin >> n;
    }
    // void loancal()
    // {
    //     float power = 1;
    //     IR = IR / (12 * 100);
    //     LT = LT * 12;
    //     for (int i = 1; i <= LT; i++)
    //     {
    //         power = power * (IR + 1);
    //     }
    //     EMI = LA * IR * ((power) / (power - 1));
    //     TotalLoan = EMI * LT;
    //     Total_INTEREST = TotalLoan - LA;
    // }
    void loancal()
    {
        r = r / (12 * 100);
        n = n * 12;
        EMI = p * r * (pow(1 + r, n)) / (pow(1 + r, n) - 1);
        TotalLoan = EMI * n;
        Total_INTEREST = TotalLoan - p;
    }
    void showloan()
    {
        if (p >= 50000)
        {
            cout << "\n----------------------Details-----------------" << endl;
            cout << "\nYour Monthly Emi is : " << EMI << " Rs.";
            cout << "\nYour Intrest Money is : " << Total_INTEREST << " Rs.";
            cout << "\nYour Total Loan Money is : " << TotalLoan << " Rs.";
        }
        else
            cout << "\nError!!!Minimum Amount of Loan is 50000";
    }
};
class Reccuring
{
private:
    float amt, rate, time, a, diposite, dipositeamt, totalamt;

public:
    void setreccuring()
    {
        cout << "\nEnter Amount :";
        cin >> amt;
        cout << "\nEnter Interest :";
        cin >> rate;
        cout << "\nEnter Time of Period(months) :";
        cin >> time;
    }
    void calculationreccuring()
    {
        rate = rate / 100;
        a = time * (time + 1) / 24;
        diposite = amt * a * rate;
        dipositeamt = amt * time;
        totalamt = dipositeamt + diposite;
    }
    void showreccuring()
    {
        cout << "\n----------------------Details-----------------" << endl;
        cout << "\nYour Reccuring Deposite is :" << diposite;
        cout << "\nDeposited amount :" << dipositeamt;
        cout << "\nTotal amount with interest :" << totalamt;
    }
};
int main()
{
    float a, x;
    int choice;
    cout << "Welcome In Banking" << endl;
    loan ok;
    Reccuring done;
    savingaccount c1(1000);
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
            cout << "Total Balance after Withdrawal:" << x << endl;
            break;
        case 2:
            cout << "Enter Diposite Amount:" << endl;
            cin >> a;
            cout << "Total Balance after Diposite:" << c1.diposite(a);
            break;
        case 3:
            cout << "Current Balance:" << c1.fbalance();
            break;
        case 4:
            ok.setvalue();
            ok.loancal();
            ok.showloan();
            break;
        case 5:
            done.setreccuring();
            done.calculationreccuring();
            done.showreccuring();
            break;
        case 0:
            break;
        }
    } while (choice != 0);
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     int base, exponent, power, i;

//     // Reading base & exponent
//     cout << "Enter base: ";
//     cin >> base;
//     cout << "Enter exponent: ";
//     cin >> exponent;

//     power = 1;
//     i = 1;
//     // caculating power of given number
//     while (i <= exponent)
//     {
//         power = power * base;
//         i++;
//     }
//     cout << "Power of " << base << " is: " << power;

//     return 0;
// }