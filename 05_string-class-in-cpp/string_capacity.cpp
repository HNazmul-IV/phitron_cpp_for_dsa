#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "Hello, I am string";
    cout << s1.length() << endl;
    cout << "Size -> " << s1.size() << endl;
    cout << "Capacity -> " << s1.capacity() << endl;
    cout << "Max Size -> " << s1.max_size() << endl;
    s1.clear();
    cout << "Is Empty -> " << s1.empty() << endl;
    s1.resize(10, 'H');

    cout << "Resized String -> " << s1 << endl;

    return 0;
}