#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    double x, y, z;
    cout << "������� �������� x, y, z: ";
    cin >> x >> y >> z;

    double maximum, minimum;
    double result;

    if (x > y) {
        maximum = x;
        minimum = y;
    }
    else {
        maximum = y;
        minimum = x;
    }

    if (z > maximum) {
        maximum = z;
    }
    else if (z < minimum) {
        minimum = z;
    }

    result = maximum * minimum;

    cout << "��������� ��������� ��������� � ��������: " << result << endl;

    return 0;
}