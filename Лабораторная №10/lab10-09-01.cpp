#include <iostream>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "Russian");
    char tmp[33];
    int A, B;

    cout << "Введите число A: ";
    cin >> A;
    cout << "Введите число B: ";
    cin >> B;

    int maskA = 0b11111000;
    int clearMaskB = ~(0b111 << 1);
    int extractedBitsA = (A & maskA) >> 3;

    B = B & clearMaskB;
    B = B | (extractedBitsA << 1);

    _itoa_s(A, tmp, 2);
    cout << "A (в двоичной системе): " << tmp << endl;
    _itoa_s(B, tmp, 2);
    cout << "B (в двоичной системе): " << tmp << endl;
    cout << "Новое значение B: " << B << endl;

    return 0;
}
