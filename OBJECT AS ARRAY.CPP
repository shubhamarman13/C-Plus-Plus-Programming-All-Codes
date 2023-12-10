#include <iostream>
#include <string.h>
using namespace std;
class employee
{
    public:
    string name;
    int roll;
    char grade;
    void detail()
    {
        cout << "***********************************************\n";
        cout << "The name of the Student  is " << this->name << endl;
        cout << "The roll no  of This student is " << this->roll << endl;
        cout << "The marks of the Student is " << this->grade << endl;
        cout << "\n \n";
    }
};
int main()
{

    employee x[15];
    int n, i;
    cout << "Enter the number of employees\n";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "enter the " << i + 1 << " name of student\n";
         cin >> x[i].name;
        cout << "enter the " << i + 1 << " roll of employee\n";
        cin >> x[i].roll;
        cout << "enter the " << i + 1 << " Grade of employee\n";
        cin >> x[i].grade;
    }
    for (int i = 0; i < n; i++)
    {

        x[i].detail();
    }
}
