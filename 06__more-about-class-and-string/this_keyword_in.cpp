#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->age = age;
        this->name = name;
    }

    void print_name_and_age()
    {
        cout << this->name << "\nAnd His/Her Age is " << this->age << endl;
    }
};

int main()
{
    Person sabina("Mst Sabina Yesmin", 19);
    sabina.print_name_and_age();
    return 0;
}