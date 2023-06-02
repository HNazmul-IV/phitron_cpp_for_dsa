#include <iostream>
#include <string>

using namespace std;

int main()
{
    string finding_word = "EGYPT";
    string input;
    getline(cin, input);

    int found_index = input.find(finding_word);

    while (found_index != -1)
    {
        input.replace(found_index, finding_word.length(), " ");
        found_index = input.find(finding_word);
    }

    cout << input;

    return 0;
}