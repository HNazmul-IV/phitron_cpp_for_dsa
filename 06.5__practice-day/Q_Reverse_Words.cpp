#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void print_word_reverse(string &word)
{
    int i = 0;
    int j = word.size() - 1;

    while (i < j)
    {
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    string input;
    getline(cin, input);

    stringstream input_ss(input);

    string input_single_word;
    
    bool is_first_word = true;
    while (input_ss >> input_single_word)
    {
        print_word_reverse(input_single_word);

        if (!is_first_word)
        {
            input_single_word.insert(0, 1, ' ');
        }
        is_first_word = false;
        cout << input_single_word;
    }
    return 0;
}
