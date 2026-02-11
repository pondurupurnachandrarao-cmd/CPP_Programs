#include <iostream>
using namespace std;

int main()
{
    int a,b,c,max;

    Cout << " Enter a value : ";
    Cin >> a;

    Cout << " Enter b value : ";
    Cin >> b;

    Cout << " Enter c value : ";
    Cin >> c;

    if (a>b && a>c)
    {
        max = a;
    }
    else if (b>a && b>c)
    {
        max = b;
    }
    else
    {
        max = c
    }

    Cout << " maximum value is : " << max << endl;
}
