#include <iostream>
#include <string.h>
using namespace std;
class My_bank
{
private:
    struct detail
    {
        int Atm_pin;
        string customer_name;
        int ac_balance;
        string bank_name;
        int IFSC;
        int ac_number;
    } shubham;

public:
    void input()
    {
        //     cout << "This is a code in which customer will get 500 rupees added to their bank a/c by pm relief fund " << endl;
        //     cout << "in this code i am using structer for all tha variables and  operator overloading to over ride the balnance with 500 rupees  " << endl
        //          << endl;

        shubham.bank_name = "State Bank Of India ";
        cout << "Entet the customer name" << endl;
        getline(cin, shubham.customer_name);
        cout << "Enter the ac number " << endl;
        cin >> shubham.ac_number;
        cout << "Enter the IFSC code " << endl;
        cin >> shubham.IFSC;
        cout << "Enter the Ac balance " << endl;
        cin >> shubham.ac_balance;
        cout << "Enter the Atm pin" << endl;
        cin >> shubham.Atm_pin;
    }
    // My_bank operator +(My_bank r)
    // {
    //     r.shubham.ac_balance = r.shubham.ac_balance + 500;
    // }
    void output()
    {
        cout << endl
             << endl;
        cout << "*********.......Bank Detail....*********" << endl;
        cout << "Bank name= " << shubham.bank_name << endl;
        cout << "customer name =" << shubham.customer_name << endl;
        cout << "ac number = " << shubham.ac_number << endl;
        cout << "IFSC = " << shubham.IFSC << endl;
        cout << "ATM PIN = " << shubham.Atm_pin << endl;
        cout << "ac balance = " << shubham.ac_balance << endl;
    }
};
int main()
{
    My_bank employ1;
    employ1.input();
    // bonus = employ1 + bonus;
    employ1.output();
    // cout<<"Accont number is "<<Employ1.shubham.ac_number;
}