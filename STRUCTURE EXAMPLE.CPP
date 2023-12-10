#include <iostream>
#include <conio.h>
using namespace std;

typedef struct student
{
    char section;
    int roll;
    float total_marks;
} h;
int main()
{
    // struct student shubham,harshita;
    h shubham, harshita;
    shubham.section = 'B';
    cout << shubham.section << endl;
    shubham.roll = 40;
    cout << shubham.roll << endl;
    shubham.total_marks = 459;
    cout << shubham.total_marks << endl;
    harshita.section = 'A';
    cout << harshita.section << endl;
    harshita.roll = 11;
    cout << harshita.roll << endl;
    harshita.total_marks = 495;
    cout << harshita.total_marks << endl;
}