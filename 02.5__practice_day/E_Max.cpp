#include <iostream>
#include <string>
#include <utility>

using namespace std;

int *get_array(int n)
{
    int *array = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    return array;
}

int get_max_from_array(int *arr, int size)
{
    int mx = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        mx = max(mx, arr[i]);
    }
    return mx;
}

int main()
{
    int n;
    cin >> n;
    int *arr = get_array(n);

    cout << get_max_from_array(arr, n);

    return 0;
}