#include <iostream>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "Russian");
    int A;
    char tmp[33];

    cout << "������� ����� A: ";
    cin >> A;

    _itoa_s(A, tmp, 2);
    cout << "����� � �������� ����: " << tmp << endl;

    if ((A & 0xF) == 0) {
        cout << "����� ������ 16" << endl;
    }
    else {
        cout << "����� �� ������ 16" << endl;
    }

    return 0;
}