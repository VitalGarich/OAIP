#include <iostream>
#include <cstring>
#include <clocale>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru");

    char inputString[500];

    cout << "Введите строку для шифрования: ";
    cin.getline(inputString, sizeof(inputString));
   
    int length = strlen(inputString);

    for (int i = 0; i < length - 1; i += 2) {

        char temp = inputString[i];

        inputString[i] = inputString[i + 1];
        inputString[i + 1] = temp;
    }

    cout << "Зашифрованная строка: " << inputString << endl;

    return 0;
}
