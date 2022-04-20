#include <iostream>
using namespace std;
#include <fstream>
int main()
{
    string srg;
    ifstream filestream("file1.txt");
    if (filestream.is_open())
    {
        while (getline(filestream, srg))
        {
            cout << srg << endl;
        }
        filestream.close();
    }
    else
    {
        cout << "File Opening is Fail." << endl;
    }
    return 0;
}