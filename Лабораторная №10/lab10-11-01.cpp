#include <iostream>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "Russian");
    int A;
    char tmp[33];

    cout << "Введите число A: ";
    cin >> A;

    _itoa_s(A, tmp, 2);
    cout << "Число в двоичном виде: " << tmp << endl;

    if ((A & 0xF) == 0) {
        cout << "Число кратно 16" << endl;
    }
    else {
        cout << "Число не кратно 16" << endl;
    }

    return 0;
}