#include <iostream>
#include <climits>
using namespace std;

void massiv();
void matrix();

int main(void)
{
    setlocale(LC_CTYPE, "Russian"); 
    int choice;
    do
    {
        cout << "�������" << endl;
        cout << "1-���������� ������" << endl;
        cout << "2-������ � ��������" << endl;
        cout << "3-�����" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1: {
            massiv(); break;
        }
        
        case 2: {
            matrix(); break;
        }
        case 3: {
            break;
        }
        }
    } while (choice != 3);
}

void massiv()   
{
    int size = 0, i, n;
    float* M, prod_pos = 1, sum = 0, avar, mn = INT_MAX;
    cout << "������� ������ ������� ";
    cin >> size;

    M = new float[size];

    for (i = 0; i < size; i++)
    {
        cout << "������� " << i + 1 << " ������� ";
        cin >> *(M + i);
        sum += *(M + i);
        if (*(M + i) > 0)
            prod_pos *= *(M + i);
    }

    float min_element = M[0];
    int min_index = 0;

    for (i = 1; i < size; i++)
    {
        if (M[i] < min_element)
        {
            min_element = M[i];
            min_index = i;
        }
    }

    float sum_before_min = 0;

    for (i = 0; i < min_index; i++)
    {
        sum_before_min += M[i];
    }

    cout << "������������ ������������� ���������: " << prod_pos << endl;
    cout << "����� ��������� �� ������������ ��������: " << sum_before_min << endl;

    delete[] M;
}

void matrix()
{

    int rows, cols;
    cout << "������� ���������� �����: ";
    cin >> rows;
    cout << "������� ���������� ��������: ";
    cin >> cols;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    cout << "������� �������� �������:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "������� [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    int positiveSum = 0;
    int firstPositiveRow = -1;

    for (int i = 0; i < rows; ++i) {
        bool allPositive = true;
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] <= 0) {
                allPositive = false;
                break;
            }
        }

        if (allPositive) {
            firstPositiveRow = i;
            break;
        }
    }

    if (firstPositiveRow != -1) {
        for (int j = 0; j < cols; ++j) {
            positiveSum += matrix[firstPositiveRow][j];
        }

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                matrix[i][j] -= positiveSum;
            }
        }

        cout << "���������� �������:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << matrix[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    else {
        cout << "� ������� ��� ������, ��� ��� �������� ������������.\n";
    }

    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;


}

