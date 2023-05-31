#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string _name, int _age)
    {
        name = _name;
        age = _age;
    };

    string name_of_age_numbers()
    {
        string _name = "";
        for (int i = 1; i <= age; i++)
        {
            _name += to_string(i)+ " " + name + "\n";
        }
        return _name;
    }
};

int main()
{
    Person nazmul("H. Nazmul Hassan", 21);
    cout << nazmul.name_of_age_numbers();

    return 0;
}