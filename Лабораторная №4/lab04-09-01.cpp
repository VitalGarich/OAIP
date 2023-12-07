#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int K;
    cout << "Введите количество грибов: ";
    cin >> K;

    if (K <= 0) {
        cout << "Это не натуральное число" << endl;
    }
    else if (K % 10 == 1 && K % 100 != 11) {
        cout << "Мы нашли " << K << " гриб в лесу" << endl;
    }
    else if (K % 10 >= 2 && K % 10 <= 4 && (K % 100 < 10 || K % 100 >= 20)) {
        cout << "Мы нашли " << K << " гриба в лесу" << endl;
    }
    else {
        cout << "Мы нашли " << K << " грибов в лесу" << endl;
    }

    return 0;
}