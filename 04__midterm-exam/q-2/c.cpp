




#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
    char name[100];
    float height;
    int age;

    Person(char *_name, int _height, int _age)
    {
        strcpy(name, _name);
        height = _height;
        age = _age;
    }
};

int main()
{

    // Dynamic Object of Person;
    char name[100] = "H. Nazmul Hassan";
    Person *nazmul = new Person(name, 5.2, 21);

    // printing Values  from dynamic Object
    cout << (*nazmul).name << endl;

    return 0;
}


