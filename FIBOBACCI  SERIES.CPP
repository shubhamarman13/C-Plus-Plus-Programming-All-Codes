#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;

    cout << "To print the fibonacci series 0 1 1 2 ...." << endl;
    cout << "Enter the term \n";
    cin >> n;
    cout << "0, 1, 1, ";
    int first = 1, second = 1, next;
    for (int i = 1; i < n; i++)
    {
        next = first + second;
        cout << next << ", ";
        first = second;
        second = next;
    }

    return 0;
}