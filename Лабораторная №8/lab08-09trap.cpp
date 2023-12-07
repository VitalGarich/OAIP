#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
    float a = 3, b = 6, h, x, s, n = 200, i = 0;
    setlocale(LC_CTYPE, "Rus");

    h = (b - a) / n;
    x = a;
    s = 0;
    do {
        s += h * (((pow(x, 3) + 3)) + ((pow(x, 3) + 3)) / 2);
        x += h;
        i++;
    } while (x < (b - a));

    printf("%f", s);

    return 0;
}