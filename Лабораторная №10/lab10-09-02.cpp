#include <iostream>
#include <bitset>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "Russian");
    char tmp[33];
    int A, n, p;

    cout << "Введите число A: ";
    cin >> A;
    cout << "Введите количество битов n: ";
    cin >> n;
    cout << "Введите позицию p: ";
    cin >> p;

    int mask = (~0 << (p + 1)) | ((1 << (p - n + 1)) - 1);

    A = A & mask;

    _itoa_s(A, tmp, 2);
    cout << "Новое значение A после установки в 0 n битов вправо от позиции p: " << tmp << endl;

    return 0;
}
