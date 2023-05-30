#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(char *_name, int _roll, int _cls, char _section)
    {
        strcpy(name, _name);
        roll = _roll;
        cls = _cls;
        section = _section;
    }
};

int main()
{
    // char name[] = "Karim Cholimullah";
    Student karim("karim Chalimullah", 10, 9, 'A');

    cout << karim.name;

    return 0;
}