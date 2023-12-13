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
            cin >> *(*(A + i) + j);
        }
    }

    cout << "Исходная матрица A:" << endl;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "  " << *(*(A + i) + j) << "  ";
        }
        cout << endl;
    }

    double* ptrA = &A[0][0];
    double Y[N];
    double* ptrY = Y;
    double maxElement = *ptrA;


    for (int i = 0; i < N; ++i) {
        *ptrY = *ptrA;
        if (*ptrY > maxElement) {
            maxElement = *ptrY;
        }
        ptrA += N + 1; 
        ++ptrY;
    }

    ptrY = Y;

  
    for (int i = 0; i < N; ++i) {
        *ptrY /= maxElement;
        ++ptrY;
    }


    cout << "Массив Y после разделения:" << endl;

    for (int i = 0; i < N; ++i) {
        cout << "  " << *(Y+i) << "  ";
    }
    cout << endl;

    return 0;
}
