#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int i, n = 5;
    float y[] = { 2, 1, 7.7, -4, 5, 9 }, a = 5.45, q = 0, s;


    for (i = 0; i < n; i++)
    {
        q *= (y[i] / (pow(i,2) + 1));
    }
    q = q * 4;
    s = (2 * a) + (q * sin(a));

    cout << "Результат s= " << s << endl;
    return 0;
}