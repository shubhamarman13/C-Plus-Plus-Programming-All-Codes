#include<iostream>
using  namespace std;

class complex
{
private:
int real, imaginary;
public:
void input(int re, int img)
{
    real=re;
    imaginary=img;
}
 void display()
 {
    cout<<real<<" + "<<imaginary<<"i"<<endl;
 }
 complex operator + (complex ref)
 {
    complex temp;
    temp.real=real+ref.real;
    temp.imaginary=imaginary+ref.imaginary;
    return temp;
 }
};
int main()
{
    complex obj1, obj2,obj3;
    obj1.input(5,7);
    obj1.display();
    obj2.input(2,1);
    obj2.display();
    obj3=obj1+obj2;
    obj3.display();
    return 0;
}



