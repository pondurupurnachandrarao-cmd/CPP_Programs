#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n value: ";
    cin >> n;

    bool isPrime = true;

    if(n <= 1)
    {
        isPrime = false;
    }
    else
    {
        for(int i = 2; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime)
        cout << "Prime number";
    else
        cout << "Not Prime";

    return 0;
}
