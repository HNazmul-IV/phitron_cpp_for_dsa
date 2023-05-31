#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int i;
    cin >> i;
    getchar();
    cout << i << endl;

    for (int i = 0; i < 2; i++)
    {
        getline(cin, s);
        cout << s <<endl;
    }

    return 0;
}