#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int sid;
};

int main()
{
    int sz;
    cin >> sz;

    Student s[sz];

    for (int i = 0; i < sz; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].section >> s[i].sid;
    }

    int m = 0;
    int n = sz - 1;

    while (m < n)
    {
        swap(s[m].sid, s[n].sid);
        m++;
        n--;
    }

    for (int i = 0; i < sz; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].section << " " << s[i].sid << " " << endl;
    }

    return 0;
}