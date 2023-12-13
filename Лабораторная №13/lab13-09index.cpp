#include <iostream>
#include <iomanip>

int main() {
    setlocale(LC_ALL, "ru");
    using namespace std;

    const int N = 3;
    double A[N][N];

    cout << "Введите элементы матрицы A(" << N << "x" << N << "):" << endl;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Исходная матрица A:" << endl;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "  " << A[i][j] << "  ";
        }
        cout << endl;
    }

    double Y[N];
    double maxElement = A[0][0];

    for (int i = 0; i < N; ++i) {
        Y[i] = A[i][i];
        if (Y[i] > maxElement) {
            maxElement = Y[i];
        }
    }

    for (int i = 0; i < N; ++i) {
        Y[i] /= maxElement;
    }

    cout << "Массив Y после разделения:" << endl;

    for (int i = 0; i < N; ++i) {
        cout << "  " << Y[i] << "  ";
    }
    cout << endl;

    return 0;
}
