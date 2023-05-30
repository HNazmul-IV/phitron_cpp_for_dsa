
#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
    char name[100];
    float height;
    int age;

    Person(char *_name, float _height, int _age)
    {
        strcpy(name, _name);
        height = _height;
        age = _age;
    }
};

int main()
{
    char nazmul_name[] = "H. Nazmul Hassan";
    Person nazmul(nazmul_name, 5.2, 21);

    ///
    char sabina_name[] = "Sabina Yesmin";
    Person sabina(sabina_name, 5, 20);

    sabina.age > nazmul.age ? cout << sabina.name << endl : cout << nazmul.name << endl;

    return 0;
}