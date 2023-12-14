#include<iostream>
using namespace std;

template <class t>
class abc
{
    public:

    void sum(t a , t b)
{
    cout<<a<<b;

}
};
int main()
{
    abc  <char> obj;
    obj.sum('a','b');
    return 0;
}
