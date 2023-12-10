#include <iostream>
using namespace std;
int main()
{
    goto first;

third:
    cout << " Singh";
    goto end;
second:
    cout << " Kumar";
    goto third;
first:
    cout << "Shubham";
    goto second;
end:
    return 0;
}