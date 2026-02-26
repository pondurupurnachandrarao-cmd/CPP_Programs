#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Factors of " << n << " are: ";

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << i << " ";
            count++;
        }
    }

    cout << "\nTotal number of factors: " << count;

    return 0;
}
