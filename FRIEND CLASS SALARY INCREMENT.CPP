#include <iostream>
using namespace std;
class EMP_detail
{
private:
    string NAME;
    int ID;
    int year;
    int salary;

public:
    void input()
    {
        cout << "Enter name of Employee" << endl;
        cin >> NAME;
        cout << "Enter the Employee ID" << endl;
        cin >> ID;
        cout << "Enter the no. of years" << endl;
        cin >> year;
        cout << "Enter the salary";
        cin >> salary;
    }
    friend class EMP_salary;
    friend class output;
};

class output
{
public:
    void output1(EMP_detail s)
    {
        cout << endl
             << "************************************************" << endl;
        cout << " EMPLOYEE NAME=" << s.NAME << endl;
        cout << " EMPLOYEE ID =" << s.ID << endl;
        cout << " NO. OF YEARS OF WORK =" << s.year << endl;
    }
};
class EMP_salary
{
public:
    void condition(EMP_detail r)

    {
        if (r.year >= 5)
        {
            r.salary = r.salary + (r.salary * 0.05);
            cout << "Salray after increment = " << r.salary;
            cout << endl
                 << "************************************************" << endl;
        }
        else
        {
            cout << "Salray  = " << r.salary;
            cout << endl
                 << "************************************************" << endl;
        }
    }
};
int main()
{
    EMP_detail shubham;
    shubham.input();
    output s1;
    s1.output1(shubham);
    EMP_salary shubhamslr;
    shubhamslr.condition(shubham);
}