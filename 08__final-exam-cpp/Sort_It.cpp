#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sect;
    int sid;
    int math_marks;
    int english_marks;
};

bool cmp(Student a, Student b)
{
    int a_total_marks = a.english_marks + a.math_marks;
    int b_total_marks = b.english_marks + b.math_marks;

    if (a_total_marks == b_total_marks)
    {
        if (a.sid < b.sid)
            return true;
        else
            return false;
    }
    else if (a_total_marks > b_total_marks)
        return true;
    else
        return false;
}

int main()
{
    int sz;
    cin >> sz;

    Student s[sz];

    for (int i = 0; i < sz; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].sect >> s[i].sid >> s[i].math_marks >> s[i].english_marks;
    }

    sort(s, s + sz, cmp);

    for (int i = 0; i < sz; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].sect << " " << s[i].sid << " " << s[i].math_marks << " " << s[i].english_marks << endl;
    }

    return 0;
}