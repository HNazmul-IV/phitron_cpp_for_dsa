#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string fs = "Ratul";
    string s1;
    getline(cin, s1);

    stringstream s1_ss(s1);
    string s1_w;
    bool fs_found = false;
    while (s1_ss >> s1_w)
    {
        if (s1_w == fs)
        {
            fs_found = true;
        }
    }

    fs_found == true ? cout << "YES" : cout << "NO";

    return 0;
}