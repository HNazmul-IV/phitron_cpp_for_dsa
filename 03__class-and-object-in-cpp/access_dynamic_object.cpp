#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char name[100];
    int cls;
    int roll;

    Student(char *_name, int _cls, int _roll)
    {
        strcpy(name, _name);
        cls = _cls;
        roll = _roll;
    }
};

int main()
{
    char name[100] = "MD. Rahim Miya.";
    Student *rahim = new Student(name, 10, 100);

    cout << (*rahim).name << endl
         << rahim->roll << endl;

    rahim->roll = 300;

    cout << rahim->roll << endl;

    return 0;
}