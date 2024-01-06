#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


float equationFunction(float x) {
    return pow(x, 3) + 3;
}


float integrate(float (*func)(float), float a, float b, int n) {
    float h = (b - a) / (2 * n);
    float x = a + 2 * h;
    float s1 = 0, s2 = 0;

    for (int i = 0; i < n; ++i) {
        s2 += func(x);
        x += h;
        s1 += func(x);
        x += h;
    }

    return h / 3 * (func(a) + 4 * s1 + 2 * s2 + func(b));
}

float equationFunction(float x);
float integrate(float (*func)(float), float a, float b, int n);

int main() {
    setlocale(LC_CTYPE, "Russian");

    float a, b, result;
    int n;


    cout << "¬ведите начальную точку a: ";
    cin >> a;

    cout << "¬ведите конечную точку b: ";
    cin >> b;

    cout << "¬ведите количество трапеций n: ";
    cin >> n;

    float (*equationPtr)(float) = equationFunction;

    result = integrate(equationPtr, a, b, n);


    cout << "–езультат вычислений: " << result << endl;

    return 0;
}
