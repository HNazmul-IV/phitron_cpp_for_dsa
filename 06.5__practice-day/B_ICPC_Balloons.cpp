#include <iostream>
#include <string>

using namespace std;

int char_to_number(char c)
{
    return c - 'A';
}

int main()
{
    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        int string_length;
        cin >> string_length;
        string input_str;
        cin >> input_str;

        int arr_length = char_to_number('Z');
        int balloons[arr_length + 1] = {0};

        for (int i = 0; i < string_length; i++)
        {
            ;
            char c = input_str[i];
            char c_int = char_to_number(c);
            if (balloons[c_int] == 0)
            {
                char x = c_int + 'A';
                balloons[c_int] += 2;
            }
            else if (balloons[c_int] >= 2)
            {

                balloons[c_int]++;
            }
        }

        int sum = 0;
        for (int i = 0; i < arr_length + 1; i++)
        {
            sum += balloons[i];
        }

        cout << sum << endl;
    }

    return 0;
}