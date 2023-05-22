#include <iostream>
#include <string>

using namespace std;

int main()
{
    int *a = new int[5];
    int *b = new int[7];

    // Taking input of *a;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    // printing the A array;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << "\t";
    }

    // Copying  A array to B array and Expanding;
    for (int i = 0; i < 7; i++)
    {
        b[i] = a[i];
    }
    b[5] = 60;
    b[6] = 70;

    // Printing Two lines between operation;
    cout << endl;

    // printing b array;
    for (int i = 0; i < 7; i++)
    {
        cout << b[i] << " \t";
    }

    // Then Deleting the A array;
    delete[] a;

    // Now Printing Again the A array;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i];
    }

    return 0;
}