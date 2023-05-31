#include <iostream>
#include <string>

using namespace std;

int main()
{
    // assigning by equal sign;
    string s1 = "Hello World";
    cout << " = -> " << s1 << endl;
    // assigning by constructor function;
    string s2("String Constructor");
    cout << " string constructor -> " << s1 << endl;

    // remove portion of string while initializing
    string s3("Hello_world", 5);
    cout << " remove after portion -> " << s1 << endl;

    // Remove beginning portion of string while initializing;
    string temp = "Hello_world";
    string s4(temp, 6);
    cout << " remove begin portion -> " << s1 << endl;

    // Assigning String with Certain number of Char;
    string s5(10, 'A');
    cout << "Assign With Same Char in certain number -> " << s1 << endl;

    return 0;
}