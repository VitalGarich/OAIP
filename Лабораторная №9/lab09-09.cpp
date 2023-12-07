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
    double sum = 0;

    std::cout << "Массив: ";
    
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 100;
        sum += arr[i];
        std::cout << arr[i] << " ";
    }
    std::cout << "\nСреднее арифметическое: " << sum / n << std::endl;

    int closestIndex = 0;
    for (int i = 1; i < n; ++i)
        if (abs(arr[i] - sum / n) < abs(arr[closestIndex] - sum / n))
            closestIndex = i;

    std::cout << "Элемент, наиболее близкий к среднему: " << arr[closestIndex] << std::endl;

    delete[] arr;
    return 0;
}
