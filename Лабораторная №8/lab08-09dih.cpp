#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
int main()
{
    double a = -3, b = 6, e = 0.0001, x;
    do
    {
        x = (a + b) / 2;
        if ((pow(x, 3) + 3 * x - 1) * (pow(a, 3) + 3 * a - 1) <= 0)
        {
            b = x;
        }
        else
        {
            a = x;
        }
    } while (abs(a - b) > 2 * e);
    cout << x;
}