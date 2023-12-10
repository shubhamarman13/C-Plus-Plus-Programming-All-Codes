#include <iostream>
using namespace std;
class shubham
{
public:
    int money1;
    void input()
    {
        cout << "Shubham se kita paisa lena hai ?";
        cin >> money1;
    }
    class Arman
    {
    public:
        int money2;
        void input2(shubham a1)
        {
            cout << "Arman se kita paisa lena hai";
            cin >> money2;
            cout << "Total amount lena hai " << a1.money1 + money2;
        }
    };
};
int main()
{
    shubham obj;
    shubham::Arman obj1;
    obj.input();
    obj1.input2(obj);
    return 0;
}