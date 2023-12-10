// EXAMPLE OF  FUNCTION OVERLOADING
#include <iostream>
#include <conio.h>
using namespace std;

int fun(int a, int b);
int fun();
int fun(int x);

//first function
int fun(int a, int b)
{
    cout << "The sum of " << a << " and " << b << " is = " << a + b << endl;
    return 0;
}
// 2nd function

int fun()
{
    int x, y, z;
    cout << "Enter the value of X and Y\n";
    cin >> x >> y;
    z = x - y;
    cout << "The substraction of " << x << " - " << y << " is " << z << endl;
    return 0;
}
int fun(int x)
{
    // esme square karega
    cout << "The square of " << x << " is " << x * x;
}
int main()
{
    cout << "FIRST FUNCTION KA KAAM YAHA SE START HOGA " << endl;
    fun(4, 5);
    cout << endl
         << " AB DUSRA FUNCTION KA KAM SHURU HOGA " << endl;
    fun();
    cout << endl
         << " AB THIRD  FUNCTION KA KAM SHURU HOGA " << endl;
    fun(6);
    return 0;
}