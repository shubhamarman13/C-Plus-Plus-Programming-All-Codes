//STUDENT DETAIL INPUT FORM
#include <iostream>
using namespace std;
class student
{
    string name[5];
    string roll[5]; // esko char lene pe input kyu nai le rha programm me contact ka
    string contact[5];
    string address[5];

public:
    student()
    {
        for (int i = 0; i < 4; i++)
        {
            cout << "Enter the name of student no." << i + 1 << endl;
            getline(cin, name[i]);
            cout << "Enter the roll no " << endl;
            // cin>>roll[i];
            getline(cin, roll[i]);
            cout << "Enter the contact number:" << endl;
            getline(cin, contact[i]);
            cout << "Enter the address" << endl;
            getline(cin, address[i]);
        }
    }
    void getresult()
    {
        for (int i = 0; i < 4; i++)
        {
            cout << "Name: " << name[i] << endl;
            cout << "Roll no: " << roll[i] << endl;
            cout << "Contact: " << contact[i] << endl;
            cout << "Address: " << address[i] << endl;
            cout << endl
                 << "***************************************" << endl;
        }
    }
};
int main()
{
    student s1;
    s1.getresult();
}
