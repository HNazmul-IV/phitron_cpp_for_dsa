#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class CustomSort
{
public:
    char c = 46;
    int cnt = 0;
};

bool cmp(CustomSort a, CustomSort b)
{
    if (a.cnt > b.cnt)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;

    CustomSort frq[26];
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;

        frq[c - 'a'].c = c;
        frq[c - 'a'].cnt++;
    }

    sort(frq, frq + 26, cmp);

    // cout << frq[0].c ;  
    for (int i = 0; i < 26; i++)
    {
        if (frq[i].cnt > 0)
        {
            // cout << frq[i].c << " -> " << frq[i].cnt << endl;

            for(int j =0; j< frq[i].cnt;j++){
                cout << frq[i].c;
            }
        }
    }

    return 0;
}