#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int i, n = 6;
    float x[] = { 3, -2, 0.7, -1, -2, 7 }, y[] = { 1, 5, -1.2, 6, 9, -4 }, q = 0;

    for (i = 0; i < n; i++)
    {
        q += x[i] * y[i];
    }

    cout << "Результат вычислений: " << q << endl;

    return 0;
}