// ARRAY OF STRING IN WHICH USER IS GIVING INPUT

#include <iostream>
using namespace std;
int main()
{
    cout << "THIS IS A CODE OF ARRAY OF STRING IN WHICH USER IS GIVING INPUT OF MULTIPLE NAME " << endl
         << endl;
    string name[5];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the name of student no." << i + 1 << endl;
        getline(cin, name[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "The name of student no." << i + 1 << " is " << name[i] << endl;
    }
}