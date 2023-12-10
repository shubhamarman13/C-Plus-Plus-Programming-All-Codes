#include <iostream>
#include <string.h>
using namespace std;
class student
{
    string name[6];
    int percentage[6];

public:
    void input()
    {
        for (int i = 0; i < 6; i++)
        {
            cout << "Enter the name of " << i + 1 << " Student:" << endl;
            cin >> name[i];
            // getline(cin,name[i]);
            cout << "Enter the marks of " << i + 1 << " Student:" << endl;
            cin >> percentage[i];
            // getline(cin,percentage[i]);
        }
    }
    class result
    {
    public:
        void show_result(student r)
        {
            cout << "******* Result list ******** \n"
                 << endl;

            for (int i = 0; i < 6; i++)
            {
                cout << i + 1 << ". ";
                if (r.percentage[i] > 60)
                {
                    cout << r.name[i] << " -> pass" << endl;
                }
                else
                {
                    cout << r.name[i] << " fail" << endl;
                }
            }
        }
    };
};
int main()
{
    student obj1;
    student::result obj;
    obj1.input();
    obj.show_result(obj1);
    return 0;
}