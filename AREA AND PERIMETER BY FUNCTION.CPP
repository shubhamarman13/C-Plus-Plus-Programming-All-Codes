//  Write a program in C++ to find the Area and Perimeter of a Rectangle With function
#include <iostream>
#include <conio.h>
using namespace std;
int area(float length,float breath)
{
    cout<<"Area="<<length*breath<<"cm square unit."<<"\n";
    return 0;
}
int perimeter(float len,float bre)
{
    cout<<"Perimeter="<<2*(len+bre)<<"cm.";
    return 0;
}
int main()
{
    
    cout<<"****This code is for finding the area and perimete of rectangle*****\n";
    float x,y;
     
    cout<<"Enter the length of rectangle in cm\n";
    cin>>x;
    cout<<"Enter the breath of the rectangle in cm \n";
    cin>>y;
    cout<<"\n";
    area(x,y);
    perimeter(x,y);
    return 0;
}