#include <iostream>
using namespace std;

int main()
{
    char c;
    int a;

    cout << "Enter a character: ";
    cin >> c;

    a = c;

    if (a >= 48 && a <= 57)
    {
        cout << "It is a digit" << endl;
    }
    else if (a >= 65 && a <= 90)
    {
        cout << "It is a Capital alphabet" << endl;
    }
    else if (a >= 97 && a <= 122)
    {
        cout << "It is a Small alphabet" << endl;
    }
    else
    {
        cout << "It is a Special character" << endl;
    }

    return 0;
}
