#include <iostream>
using namespace std;
int main()
{
    int number,times=0;
    cout<<"Enter the no. to find the no. of digit \n";
    cin>>number;
    while (number>0)
    {
        number=number/10;
        times=times+1;
    }
    cout<<times;
    return 0;

}
