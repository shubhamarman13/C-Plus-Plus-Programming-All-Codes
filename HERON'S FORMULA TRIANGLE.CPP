// code to find the area of triangle by HERON's formula

#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int area(float a, float b, float c)
{
    float unit;
    float s;
    s=(a+b+c)/2;
    unit=s*(s-a)*(s-b)*(s-c);
    // cout<<unit;
    cout<<sqrt(unit)<<" cm cube.";
    return 0;
}
int main()
{
   cout<<"Enter the sides of triangle in cm \n";
    float a,b,c;
    cout<<"Enter the all three sides \n";
    cin>>a>>b>>c;
    area(a,b,c);
}