#include <iostream>
#include <string>

using namespace std;

int main()
{
    char input;
    cin >> input;

    if (input >= '0' && input <= '9')
    {
        cout << "IS DIGIT";
    }
    else if (input >= 'A' && input <= 'Z')
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    }
    else if (input >= 'a' && input <= 'z')
    {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }
    return 0;
}