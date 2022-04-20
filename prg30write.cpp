#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream filestream("file.txt");
    if (filestream.is_open())
    {
        filestream << "Welcome to Skillqode.";
        filestream << "\nWe Started New Lab.";
        filestream << "\nWe Started New Branch.";
        filestream.close();
    }
    else
        cout << "File Opening is Fail";
    return 0;
}