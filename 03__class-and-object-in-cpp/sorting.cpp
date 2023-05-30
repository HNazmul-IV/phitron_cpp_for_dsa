#include <bits/stdc++.h>

using namespace std;

int main()
{

    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Printing array as it is;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sorting Smaller to Greater and printing;
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    // Sorting Smaller to Greater and printing;
    sort(arr, arr + size, greater<int>());
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }

        return 0;
}