#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main()
{

    Student rahim;
    rahim.cls = 9;
    rahim.roll = 1;
    rahim.section = 'A';
    char rahim_name[100] = "Rahim";
    strcpy(rahim.name, rahim_name);

    Student karim;
    karim.cls = 9;
    karim.roll = 100;
    karim.section = 'B';
    char karim_name[] = "Karim";
    strcpy(karim.name, karim_name);

    cout << rahim.name;

    return 0;
}