// The code is for the operator overloading is below

#include<iostream>
using namespace std;
class shubham
{
int x; 
int y;
public:
void input()
{
    cout<<"Enter the value of x and y\n";
    cin>>x>>y;
}
shubham operator +(shubham r)
{
    r.x=r.x+5;
    r.y=r.y+5;
    return r;
}
void display()
{
    cout<<endl;
    cout<<x<<endl<<y<<endl;
}
};
int main()
{
    shubham obj,obj2;
    obj.input();
    obj.display();
    obj2=obj2+obj;
    obj2.display();
    return 0;
     
}