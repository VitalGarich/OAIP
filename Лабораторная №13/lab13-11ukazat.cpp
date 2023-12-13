#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int N;
    cout << "Введите размерность матрицы N: ";
    cin >> N;
    
    if (N <= 0) {
        cout << "Размерность матрицы должна быть положительным числом." << endl;
        return 1;
    }

    int** A = new int* [N];

    for (int i = 0; i < N; ++i) {
        A[i] = new int[N];
    }

    cout << "Введите элементы матрицы:" << endl;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> *(*(A + i) + j);
        }
    }

    int maxElement = *(*(A + 0) + 0);
    int rowIndex = 0;

    for (int i = 1; i < N; ++i) {
        if (*(*(A + i) + i) > maxElement) {
            maxElement = *(*(A + i) + i);
            rowIndex = i;
        }
    }

    cout << "Строка с максимальным элементом на главной диагонали (" << maxElement << "):" << endl;

    for (int j = 0; j < N; ++j) {
        cout << *(*(A + rowIndex) + j) << " ";
    }

    for (int i = 0; i < N; ++i) {
        delete[] A[i];
    }

    delete[] A;

    return 0;
}
