#include <iostream>
#include <string.h>
using namespace std;
class ankit;
class shubham
{
    private:
    int a;
    public:
    void money()
    {
        a=10;
    }
    friend void gaurav(shubham p1, ankit p2);
};
class ankit
{
    private: 
    int b;
    public:
    void money2()
    {
        b=10;
    }
    friend void gaurav(shubham p1, ankit p2);

};

 void gaurav(shubham p1, ankit p2)
{
    int sum;
    sum=p1.a+p2.b;
    cout<<"Now gaurav have "<<sum<<" rupees";

}
int  main()
{
 shubham obj;
 obj.money();   
 ankit obj2;
 obj2.money2();
 gaurav(obj, obj2);
}