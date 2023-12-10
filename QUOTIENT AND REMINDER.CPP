//  Write a program in C++ to compute quotient and remainder
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num,div,quotient,rem;
    cout<<"Enter the  divident \n";
    cin>>num;
    cout<<"Enter the divisor ";
    cin>>div;
    rem=num%div;
    quotient=num/div;
    cout<<"*********************\n";
    cout<<"quotient="<<quotient<<endl;
    cout<<"Reminder="<<rem<<endl;

}
