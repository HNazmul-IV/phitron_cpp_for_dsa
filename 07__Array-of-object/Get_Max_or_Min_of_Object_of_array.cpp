#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Student
{
public:
    string name;
    int marks;
    int roll;
};

int main()
{
    Student s[3];
    int s_size = 3;

    for (int i = 0; i < s_size; i++)
    {
        Student *s_current = &s[i];

        getline(cin, (*s_current).name);
        cin >> s_current->marks >> s_current->roll;

        cin.ignore();
    }

    for (int i = 0; i < s_size; i++)
    {
        cout << s[i].name << " " << s[i].marks << " " << s[i].roll << endl;
    }

    Student max_marks;
    max_marks.marks = INT32_MIN;

    for (int i = 0; i < s_size; i++)
    {
        Student *s_current = &s[i];

        cout << s_current->marks << endl;
        if (max_marks.marks < s_current->marks)
        {
            max_marks = *s_current;
        }
    }

    cout << "Max Number got -> " << max_marks.name << endl;

    Student min_marks;
    min_marks.marks = INT32_MAX;

    for (int i = 0; i < s_size; i++)
    {
        Student *s_current = &s[i];

        if (min_marks.marks > s_current->marks)
        {
            min_marks = *s_current;
        }
    }

    cout << "Min Number got -> " << min_marks.name << endl;
    return 0;
}