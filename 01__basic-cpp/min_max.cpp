#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int mn = min(a, b), mx = max(a, b);

    cout << "Min \t" << mn << endl
         << "Max \t" << mx << endl;
    return 0;
}