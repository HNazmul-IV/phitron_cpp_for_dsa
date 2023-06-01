#include <iostream>
#include <string>

using namespace std;

namespace husband{
    int age = 20;
    string name = "Nazmul";

    void status(){
        cout << "Yes, Status is Very good. Nazmul Loves Sabina too much" << endl;
    }
}


namespace wife{
    int age = 19;
    string name = "Sabina Yesmin";

    void status(){
        cout << "Yes, Status is Very excellent here. Sabina Loves Nazmul too much. Even more than Nazmul" << endl;
    }
}



int main()
{
    husband::status();
    wife::status();
    return 0;
}