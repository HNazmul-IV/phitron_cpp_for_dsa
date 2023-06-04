#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;

        int fi = s1.find(s2);

        while (fi != -1)
        {
            s1.replace(fi, s2.size(), "$");
            fi = s1.find(s2);
        }
        cout << s1 << endl;
    }

    return 0;
}