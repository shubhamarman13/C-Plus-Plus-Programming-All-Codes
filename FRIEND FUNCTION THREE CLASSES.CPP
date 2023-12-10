#include <iostream>
using namespace std;
class NAME
{
private:
    string name;

public:
    NAME()
    {
        cout << "Enter the name of the student \n";
        cin >> name;
    }
    friend class MARKS;
    friend class RESULT;
};
class MARKS
{
private:
    int marks;

public:
    MARKS()
    {
        cout << "Enter the marks of  the student\n";
        cin >> marks;
    }
    friend class RESULT;
};
class RESULT
{
public:
    void result(NAME n, MARKS m)
    {
        cout << "NAME= " << n.name << endl;
        cout << "MARKS= " << m.marks << endl;
    }
};
int main()
{
    NAME x;
    MARKS y;
    RESULT S;
    S.result(x, y);
}