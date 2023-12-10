#include <iostream>
#include <conio.h>
using namespace std;
int swap(int x,int y)
{
   cout<<"Before swapping the values are:-\n"<<"x="<<x<<"\n"<<"y="<<y<<"\n"; 
   x=x+y;
   y=x-y;
   x=x-y;  
   cout<<"After  swapping the values are:-\n"<<"x="<<x<<"\n"<<"y="<<y; 
     return 0;

}
int main()
{
    int x,y;
    cout<<"Enter the value of x\n";
    cin>>x;
    cout<<"Enter the value of y\n";
    cin>>y;
    swap(x,y);
}