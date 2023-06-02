
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    stringstream input_ss(input);

    string input_single_word;
    int found_word = 0;
    while (input_ss >> input_single_word)
    {
        for (char c : input_single_word)
        {
            c = c >= 'A' && c <= 'Z' ? tolower(c) : c;
            if (c >= 'a' && c <= 'z')
            {
                found_word++;
                break;
            }
        }
    }

    cout << found_word;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s; // Mum ! py 
    getline(cin, s);

    int count = 0; // 3
    bool found = false;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (found == false)
            {
                count++;
            }
            found = true;
        }
        else
        {
            found = false;
        }
    }

    cout << count;
    return 0;
}