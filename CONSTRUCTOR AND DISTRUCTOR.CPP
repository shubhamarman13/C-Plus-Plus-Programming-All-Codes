// construter and the distrckter..//
#include <iostream>
using namespace std;
class shubham
{   int a;
    public:
shubham(void)
{
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"The value  of a is = "<<a<<endl;
}
~shubham(void)
{
    cout<<"The value which is created by the constructer is now deleted by this distructer"<<endl;
}
};
int main()
{
    shubham obj;

}
