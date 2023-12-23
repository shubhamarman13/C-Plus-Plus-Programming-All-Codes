// THIS IS THE CODE THAT I HAVE DONE IN HACKER RANK AND I HAVE MENTION THE QUESTION BEWLOW THE CODE

// Sample Input
// 3 12345678912345 a 334.23 14049.30493

#include <iostream>
#include <cstdio>
#include  <iomanip> 
using namespace std;

int main() {
int a;
long b;
char c;
float d;
double e;
cin>>a>>b>>c>>d>>e;
cout << a << "\n" << b << "\n" << c << "\n" << fixed << setprecision(3) << d << "\n" << fixed << setprecision(10) << e;
    return 0;

}

/*Sample Output

3
12345678912345
a
334.230
14049.304930000 */