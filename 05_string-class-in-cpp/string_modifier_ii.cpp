#include <iostream>
#include <string>

using namespace std;

int main()
{
    // String assign function and (=) is same;
    string s1 = "Hello ";
    string s2;
    s2.assign("World");

    // String insert , replace and erase;
    string s3 = "Hello World";
    s3.erase(4, 2);
    s3.insert(4, "WTF");
    s3.replace(7, 0, "__");
    // Hello World -> HellWorld -> HelloWTFWorld -> Hello__WTFWorld;
    cout << s3 << endl;
    return 0;
}