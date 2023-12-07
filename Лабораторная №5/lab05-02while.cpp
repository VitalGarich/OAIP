#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_CTYPE, "Russian");
    float s = 5.9;
    float m = 6.0;
    float f = 4.0;

    float c = 0.0;
    while (c <= 0.9) {

        float y = (s + c) / log(f) / exp(-5.0);

        float h = (y - m) / log(y);

        c += 0.1;

        std::cout << "Значение h для c = " << c << ": " << h << std::endl;

    }

    return 0;
}