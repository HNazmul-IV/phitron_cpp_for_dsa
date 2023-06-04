#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student
{
public:
    string name;
    int marks;
};

bool cmp(Student a, Student b)
{
    if (a.marks > b.marks)
        return true;
    else
        return false;
}

int main()
{
    int size = 5;
    Student s[size];

    for (int i = 0; i < size; i++)
    {
        getline(cin, s[i].name);
        cin >> s[i].marks;
        cin.ignore();
    }

    sort(s, s + size, cmp);

    // for (int i = 0; i < size - 1; i++)
    // {
    //     for (int j = i + 1; j < size; j++)
    //     {
    //         if (s[i].marks > s[j].marks)
    //         {
    //             // Student temp = s[i];
    //             // s[i] = s[j];
    //             // s[j] = temp;

    //             // or swap function
    //             swap(s[i], s[j]);
    //         }
    //     }
    // }

    for (int i = 0; i < size; i++)
    {
        cout << s[i].name << " -> " << s[i].marks << endl;
    }

    return 0;
}