
#include <bits/stdc++.h>

using namespace std;

class Mobile
{
public:
    int price;
    float rating;
    char name[50];

    Mobile(char *_name, int _price, float _rating)
    {
        strcpy(name, _name);
        rating = _rating;
        price = _price;
    }
};

Mobile samsung_phone()
{
    char name[] = "Samsung";
    Mobile phone(name, 30000, 4.5);
    return phone;
}

int main()
{
    Mobile samsung = samsung_phone();

    cout << samsung.name << endl
         << samsung.price << endl
         << samsung.rating;
    return 0;
}
