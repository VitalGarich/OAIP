#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    float s = 5.9, m = 6, f = 4, c[] = { 4, 0.5, 8 }; 

    float y, h;

    for (int i = 0; i < 3; i++) {
        y = (s + c[i]) / log(f) / exp(-5.0);
        h = (y - m) / log(y);

        cout << "Значение h при c = " << c[i] << ": " << h << endl;
    }

    return 0;
}