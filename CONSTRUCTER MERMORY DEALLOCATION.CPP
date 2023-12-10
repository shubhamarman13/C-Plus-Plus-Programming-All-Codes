#include <iostream>
#include <string.h>
using namespace std;
int count = 0;
class detail
{
public:
    detail()
    {
        cout << "runing this code and creating the file " << ++count << endl;
    }
    ~detail()
    {

        // cout << "runing this code and deleating  the file " << count-- << endl;
        cout << "File deleting" << endl; // ye code utana time run hoga jeta time object bana hoga
                                         //  destructor wo memory delete karta hai jo constrcuter bnata hai
    }
};
int main()
{
    detail obj, obj2;
    return 0;
}