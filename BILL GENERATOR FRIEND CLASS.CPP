#include <iostream>
using namespace std;
class item
{
    string item[10];
    int x;
    int quantity[10];
    int price[10];

public:
    void input()
    {
        cout << "Enter the numbers of items";
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            cout << "Enter the item name " << endl;
            cin >> item[i];
            cout << "Enter the quantity " << endl;
            cin >> quantity[i];
            cout << "Enter the price" << endl;
            cin >> price[i];
        }
    }
    friend class output;
};
class output
{
public:
    void output1(item r)
    {
        float total = 0;
        cout << "**********************************************************************" << endl;
        for (int i = 0; i < r.x; i++)
        {
            cout << "ITEM NAME  =" << r.item[i] << endl;
            cout << "QUANTITY  =" << r.quantity[i] << endl;
            cout << "PRICE per unit  =" << r.price[i] << "  ";
            cout << r.quantity[i] << " X " << r.price[i] << "= " << r.quantity[i] * r.price[i] << endl;
            total = total + (r.quantity[i] * r.price[i]);
        }
        cout << "**********************************************************************" << endl;
        cout << "TOTAL= " << total;
    }
};
int main()
{
    item call;
    call.input();
    output call2;
    call2.output1(call);
}