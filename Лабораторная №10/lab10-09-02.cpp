#include <iostream>
#include <bitset>
using namespace std;
int main() {
    setlocale(LC_CTYPE, "Russian");
    char tmp[33];
    int A, n, p;

    cout << "������� ����� A: ";
    cin >> A;
    cout << "������� ���������� ����� n: ";
    cin >> n;
    cout << "������� ������� p: ";
    cin >> p;

    int mask = (~0 << (p + 1)) | ((1 << (p - n + 1)) - 1);

    A = A & mask;

    _itoa_s(A, tmp, 2);
    cout << "����� �������� A ����� ��������� � 0 n ����� ������ �� ������� p: " << tmp << endl;

    return 0;
}
