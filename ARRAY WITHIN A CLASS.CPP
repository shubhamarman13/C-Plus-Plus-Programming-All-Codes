#include <iostream>
using namespace std;
class studentdetail
{

    string name[3];
    int roll[3], marks[3];
    float percentage[3];

public:
    void input_output()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << " student name \n";
            cin >> name[i];
            cout << "Enter the roll number\n";
            cin >> roll[i];
            cout << "Enter the marks \n";
            cin >> marks[i];
            percentage[i] = (marks[i]) * 0.2;
        }
        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << " student name = " << name[i] << endl;
            cout << "Roll number= " << roll[i] << endl;
            cout << "Marks= " << marks[i] << endl;
            cout << "percentage % = " << percentage[i] << endl;
            cout << "*************************************** " << endl;
        }
    }
};
int main()

{
    studentdetail shubham, ram;
    shubham.input_output();
}