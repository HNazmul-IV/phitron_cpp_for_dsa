#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char name[100];
    int age;
    int roll;
    int cls;
    char section;

    Student(char *_name, int _age, int _roll, int _cls, char _section)
    {
        strcpy(name, _name);
        age = _age;
        roll = _roll;
        cls = _cls;
        section = _section;
    };
};

Student fun()
{
    char name[100] = "Rahim Salimullah";
    Student rahim(name, 30, 1, 12, 'A');

    return rahim;
}

int main()
{
    Student rahim = fun();

    cout << rahim.name << endl
         << rahim.age << endl
         << rahim.roll << endl
         << rahim.cls << endl
         << rahim.section;

    return 0;
}