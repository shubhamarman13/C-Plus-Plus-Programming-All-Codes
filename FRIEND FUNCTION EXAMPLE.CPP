#include <iostream>
#include <conio.h>
using namespace std;
class A
{
    int a, b;

public:
    void input()
    {
        cout << "Enter the value of A and B\n";
        cin >> a >> b;
    }
    friend void add(A obj);
};

void add(A obj)
{
    int c;
    c = obj.a + obj.b;
    cout << "sum=" << c;
}
int main()
{
    A kk;
    kk.input();
    add(kk);
    return 0;
}