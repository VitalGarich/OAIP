#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int K;
    cout << "������� ���������� ������: ";
    cin >> K;

    if (K <= 0) {
        cout << "��� �� ����������� �����" << endl;
    }
    else if (K % 10 == 1 && K % 100 != 11) {
        cout << "�� ����� " << K << " ���� � ����" << endl;
    }
    else if (K % 10 >= 2 && K % 10 <= 4 && (K % 100 < 10 || K % 100 >= 20)) {
        cout << "�� ����� " << K << " ����� � ����" << endl;
    }
    else {
        cout << "�� ����� " << K << " ������ � ����" << endl;
    }

    return 0;
}