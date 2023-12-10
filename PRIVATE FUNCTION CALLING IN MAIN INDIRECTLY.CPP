#include <iostream>
using namespace std;
class shubham
{
    void input()
    {
        cout << "Enter the marks" << endl;
        cin >> marks;
        cout << "marks =" << marks << endl;
    }

public:
    int marks;
    void getdate();
};
void shubham ::getdate()
{
    input();
}
int main()
{
    shubham obj;
    obj.getdate();
}