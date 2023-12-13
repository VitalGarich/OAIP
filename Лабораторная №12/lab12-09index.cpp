#define _CRT_SECURE_NO_WARNINGS 1  // Отключение предупреждения о безопасности для Visual Studio
#include <iostream>
#include <cstring>
#include <clocale>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru");

    char S[500], S1[500];
    int n;

    cout << "Введите строку S: ";
    cin.getline(S, sizeof(S));

    cout << "Введите подстроку S1: ";
    cin.getline(S1, sizeof(S1));

    cout << "Введите позицию (номер) n: ";
    cin >> n;

    if (n >= 0 && n <= strlen(S)) {
        char result[1000];

        for (int i = 0; i < n; ++i) {
            result[i] = S[i];
        }
        result[n] = '\0';

        strcat(result, S1);

        for (int i = n; i <= strlen(S); ++i) {
            result[i + strlen(S1)] = S[i];
        }

        cout << "Результат вставки: " << result << endl;
    }
    else {
        cout << "Ошибка: некорректная позиция вставки." << endl;
    }

    return 0;
}
