#include <iostream>
#include <Windows.h>
using namespace std;

void reverseString(const char* str, char*& reversedStr);

int main() {
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru");
    char inputStr[100];
    char* reversedStr = nullptr;

    cout << "Введите строку: ";
    cin.getline(inputStr, 100);

    reverseString(inputStr, reversedStr);

    cout << "Строка в обратном порядке: " << reversedStr << endl;
    
    delete[] reversedStr;

    return 0;
}

void reverseString(const char* str, char*& reversedStr) {
    int strLength = strlen(str);

    reversedStr = new char[strLength + 1];

    const char* strPtr = str + strLength - 1;
    char* reversedStrPtr = reversedStr;

    while (strPtr >= str) {
        *reversedStrPtr = *strPtr;
        strPtr--;
        reversedStrPtr++;
    }

    *reversedStrPtr = '\0'; 
}
