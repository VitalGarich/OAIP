#include <iostream>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "Russian");
    char tmp[33];
    int A = 150;

    _itoa_s(A, tmp, 2);
    cout << "Число A: " << tmp << endl;

    
    int n = 3; 
    int p = 5; 
    int maskA = (~0 << (p + 1)) | ((1 << (p - n + 1)) - 1);
    int B = 0x24;

    _itoa_s(B, tmp, 2);
    cout << "Число B: " << tmp << endl;

    A = (A & maskA) | (B << (p - n + 1));

    _itoa_s(A, tmp, 2);
    cout << "Результат: " << tmp << endl;

    return 0;
}
