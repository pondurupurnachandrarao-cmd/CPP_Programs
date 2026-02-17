#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter value of a: ";
    cin >> a;

    if (a % 2 == 0 && a % 3 == 0)
    {
        cout << "fizz-buzz" << endl;
    }
    else if (a % 2 == 0)
    {
        cout << "fizz" << endl;
    }
    else if (a % 3 == 0)
    {
        cout << "buzz" << endl;
    }
    else
    {
        cout << a << endl;
    }

    return 0;
}
