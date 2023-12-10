//multiline macro in c++ by Shubham Arman
#include <iostream>
using namespace std;
#define count(x, y)                          \
    {                                        \
        cout << "First Rank :" << x << endl; \
        cout << "Second Rank :" << y;        \
    }
int main()
{
    string a, b;
    // count("Shubham","Arman");   // default method to  send the argument to the macro
    cout << "Enter the  to name by respective ranks \n";
    cin >> a >> b;
    count(a, b);
}