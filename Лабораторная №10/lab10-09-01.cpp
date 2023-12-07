#include <iostream>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "Russian");
    char tmp[33];
    int A, B;

    cout << "������� ����� A: ";
    cin >> A;
    cout << "������� ����� B: ";
    cin >> B;

    int maskA = 0b11111000;
    int clearMaskB = ~(0b111 << 1);
    int extractedBitsA = (A & maskA) >> 3;

    B = B & clearMaskB;
    B = B | (extractedBitsA << 1);

    _itoa_s(A, tmp, 2);
    cout << "A (� �������� �������): " << tmp << endl;
    _itoa_s(B, tmp, 2);
    cout << "B (� �������� �������): " << tmp << endl;
    cout << "����� �������� B: " << B << endl;

    return 0;
}
