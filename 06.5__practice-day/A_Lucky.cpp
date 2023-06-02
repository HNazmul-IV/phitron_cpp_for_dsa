// #include <iostream>
// #include <string>
// #include <cmath>

// using namespace std;

// int main()
// {
//     int test_case;
//     cin >> test_case;

//     for (int i = 0; i < test_case; i++)
//     {

//         string input;
//         cin >> input;

//         int sum_first_3 = 0;
//         int sum_last_3 = 0;
//         int input_length = input.length();

//         for (int j = 0; j < input_length; j++)
//         {
//             char c = input[j];

//             if (j + 1 > input_length / 2)
//             {
//                 sum_last_3 += c - '0';
//             }
//             else
//             {
//                 sum_first_3 += c - '0';
//             }
//         }

//         if(sum_first_3 == sum_last_3){
//             cout << "YES" << endl;
//         }
//         else {
//             cout << "NO" << endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        int ans = 0;

        for (int j = 0; j < 6; j++)
        {
            int ne = x % 10;  

            x = x / 10;

            if (j > 2)
            {
                ans = ans + ne;
            }

            else
            {
                ans = ans - ne;
            }
        }

        if (ans == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}