
// Question: Why do we need dynamic memory allocation? Explain with examples.

// ans: As normally, C or C++ will delete your variable or data after its scoped executed. Because Normally C++ store your data to stack memory and Deleting all of data inside of scope or function is the regular behaviour of stack memory. So why wee need dynamic memory. I wanna take your attention to below code please,

#include <bits/stdc++.h>

using namespace std;

int *returning_from_static()
{
    int ages[5] = {10, 12, 14, 15, 20};
    return ages;
}
int *returning_from_dyn()
{
    int *ages = new int[5]{10, 12, 14, 15, 20};
    return ages;
}



int main()
{
    // int *static_age = returning_from_static();
    int *dyn_age = returning_from_dyn();
    another_reason();
    // cout << static_age[1] << " " << static_age[2] << endl;
    cout << dyn_age[1] << " " << dyn_age[2] << endl;
}
