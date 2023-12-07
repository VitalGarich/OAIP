#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
    float i, s1, s2, a = -3, s, b = 6, h, x, n = 200;
    setlocale(LC_CTYPE, "Russian");

    h = (b - a) / (2 * n);
    x = a + 2 * h;
    s1 = 0;
    s2 = 0;
    i = 0;
    do {
        s2 = s2 + (pow(x, 3) + 3);
        x = x + h;
        s1 = s1 + (pow(x, 3) + 3);
        x = x + h;
        i++;
    } while (x > (b - h));

    s = h / 3 * ((pow(a, 3) + 3) + 4 * s1 + 2 * s2 + (pow(b, 3) + 3));

    printf("%f", s);

    return 0;
}