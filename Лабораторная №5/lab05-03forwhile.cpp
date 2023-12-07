#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_CTYPE, "Russian");
    float s[] = { 3.0, 0.8, 4.0 }; 
    float m = 6.0;
    float f = 4.0;

    float c = 0.2;
    while (c <= 0.5) {
        for (int i = 0; i < 3; i++) {
         
            float y = (s[i] + c) / log(f) / exp(-5.0);

           
            float h = (y - m) / log(y);

            std::cout << "Значение h для s = " << s[i] << ", c = " << c << ": " << h << std::endl;
        }

        c += 0.1;
    }

    return 0;
}