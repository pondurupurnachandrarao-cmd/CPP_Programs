#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a value: ";
    cin >> a;

    if (a % 5 == 0)
    {
        cout << a << " is a multiple of 5" << endl;
    }
    else
    {
        cout << a << " is not a multiple of 5" << endl;
    }
}
