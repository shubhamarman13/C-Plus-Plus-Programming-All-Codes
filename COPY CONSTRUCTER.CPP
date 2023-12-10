#include <iostream>
#include <string.h>
using namespace std;
class detail
{
    int a;
    int b;

public:
    detail(int x, int y)
    {
        a = x;
        b = y;
        cout << a << " " << b << endl;
    }
    detail(detail &ref) // Esme copy karne k leye ek or object banana prega jo ki bnaya gaya hai obj2
    {
        int c, d;  // esme agar hum c or d variable na bnaye to v print kara sakte hai
        c = ref.a; // direct cout me ref.a or ref. b  laga k
        d = ref.b;
        cout << c << " " << d << endl;
    }
};
int main()
{
    detail obj(4, 5);
    detail obj2 = obj;
    return 0;
}