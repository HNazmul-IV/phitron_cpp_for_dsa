#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void print_word(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        print_word(ss);
        cout << word << endl;
    }
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);

    print_word(ss);
    return 0;
}