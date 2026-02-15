#include <iostream>
using namespace std;

int main()
{
    int a, id;

    cout << "Enter a value: ";
    cin >> a;

    id = a % 10;

    if (id == 0 || id == 2 || id == 4 || id == 6 || id == 8)
    {
        cout << a << " is Even" << endl;
    }
    else
    {
        cout << a << " is odd" << endl;
    }

    return 0;
}
