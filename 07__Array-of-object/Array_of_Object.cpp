#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    // Student(string name, int roll, int marks)
    // {
    //     this->name = name;
    //     this->roll = roll;
    //     this->marks = marks;
    // }
    // Student();
};

int main()
{
    Student students[5];

    for(int i =0; i<2;i++){
        getline(cin, students[i].name);
        cin >> students[i].marks >> students[i].roll;
        cin.ignore();
    }

    for(int i =0; i<2;i++){
        cout << students[i].name << ' ' << students[i].marks << " " << students[i].roll << endl;
    }

    return 0;
}

