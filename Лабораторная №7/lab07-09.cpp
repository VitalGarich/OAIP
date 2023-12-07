#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x[] = { 0.7, 6, -7, 9, -4, 1 }, d = 5.5e-4, a;
    int size = sizeof(x) / sizeof(x[0]), i;

    for (i = 0; i < size; ++i) {

        a = (exp(-x[i]) * sin(x[i])) / (sqrt(d + cos(x[i])));
        std::cout << "a[" << i+1 << "] = " << a << std::endl;

    }

    return 0;
}