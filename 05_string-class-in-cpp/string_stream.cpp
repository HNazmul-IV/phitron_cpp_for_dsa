#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int task;
    cin >> task;
    getchar();

    for (int i = 0; i < task; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            cout << word << "\t";
        }
        cout << endl;
    }

    return 0;
}