#include <iostream>
using namespace std;

int main()
{
    int pass;

    while(1)
    {
        cout << "Enter Password: ";
        cin >> pass;

        if(pass == 1234)
        {
            break;
        }
        else
        {
            cout << "Wrong Password! Try again.\n";
        }
    }

    cout << "Access Granted";

    return 0;
}
