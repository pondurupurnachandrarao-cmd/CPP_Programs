#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int max = INT_MIN;
    int min = INT_MAX;

    while (n > 0)
    {
        int remainder = n % 10;

        if (remainder > max)
        {
            max = remainder;
        }

        if (remainder < min)
        {
            min = remainder;
        }

        n = n / 10;
    }

    cout << "Maximum digit: " << max << endl;
    cout << "Minimum digit: " << min << endl;

    return 0;
}
