#include <iostream>
using namespace std;
int main()
{    
    int var,rem,x=0;
    cout<<"Enter the number \n";
    cin>>var;
    int comp=var;
    while (var>0)
    {
        rem=var%10;
        x=10*x+rem;
        var=var/10;
    }
    if (x==comp)
    {
        cout<<"palindrome number ";
    }
    else
    {
        cout<<"not palindrome number ";
    }
    cout<<x;
    return 0;
}