#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    setlocale(LC_ALL, "ru");

    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    srand(time(0));
    int* arr = new int[n];
 
    std::cout << "Исходный массив: ";
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 100;
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int newSize = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            arr[newSize++] = arr[i];
        }
    }
    while (newSize < n) {
        arr[newSize++] = 0;
    }

    std::cout << "Массив после удаления и добавления: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}
