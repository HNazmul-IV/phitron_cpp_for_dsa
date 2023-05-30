#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    cin >> s1;

    cout << s1 << endl;
    s1.append("My Name is Nazmul Hassan");
    s1 += " A";
    s1.push_back('A');
    cout << s1 << endl;
    cout << s1.size() << endl;
    cout << s1.capacity() << endl;

    s1.pop_back();
    s1.pop_back();
    s1.pop_back();
    s1.pop_back();
    
    cout << s1 << endl;
    cout << s1.size() << endl;
    cout << s1.capacity() << endl;

    return 0;
}