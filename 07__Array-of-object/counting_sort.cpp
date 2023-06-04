#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int fa[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        fa[a - 'a']++;
    }

    for (char i = 'a'; i < 'z'; i++)
    {
        if (fa[i - 'a'] > 0)
        {
            for (int j = 0; j < fa[i - 'a']; j++)
            {
                cout << i;
            }
        }
    }

    return 0;
}