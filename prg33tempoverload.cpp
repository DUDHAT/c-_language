#include <iostream>
using namespace std;
template <class T>
void display(T t1)
{
    cout << "Displaying Template " << t1 << "\n";
}
template <class T1, class T2>
void display(T1 t1, T2 t2)
{
    cout << "Displaying Template " << t1 << "\t" << t2 << "\n";
}
// void display(int t1)
// {
//     cout<<"Explicity display"<< t1<<"\n";
// }
int main()
{
    display(200);
    display(12.40);
    display('G');
    display('G', 54);
    return 0;
}