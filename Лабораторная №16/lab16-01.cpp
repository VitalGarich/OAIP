#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void printMatrix(const int* const* matrix, int& rows, int& cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int minSumOddRows(const int* const* matrix, int& rows, int& cols) {
    int sum = 0;
    for (int i = 1; i < rows; i += 2) {
        int minElement = matrix[i][0];
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
            }
        }
        sum += minElement;
    }
    return sum;
}

int maxSumEvenRows(const int* const* matrix, int& rows, int& cols) {
    int sum = 0;
    for (int i = 0; i < rows; i += 2) {
        int maxElement = matrix[i][0];
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
        sum += maxElement;
    }
    return sum;
}

int main() {
    setlocale(LC_ALL, "ru");
    srand(static_cast<unsigned int>(time(nullptr)));

    int rows = 4;
    int cols = 4;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = rand() % 201 - 100;
        }
    }

    for (int i = 0; i < rows; i += 2) {
        int* temp = matrix[i];
        matrix[i] = matrix[i + 1];
        matrix[i + 1] = temp;
    }

    cout << "Матрица:" << endl;
    printMatrix(matrix, rows, cols);

    int minSum = minSumOddRows(matrix, rows, cols);
    int maxSum = maxSumEvenRows(matrix, rows, cols);

    cout << "Сумма минимальных элементов матрицы нечетных строк: " << minSum << endl;
    cout << "Сумма максимальных элементов матрицы четных строк: " << maxSum << endl;

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
