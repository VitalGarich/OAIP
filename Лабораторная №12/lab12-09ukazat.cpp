#define _CRT_SECURE_NO_WARNINGS 1  // ���������� �������������� � ������������ ��� Visual Studio
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

    cout << "������� ������ S: ";
    cin.getline(S, sizeof(S));

    cout << "������� ��������� S1: ";
    cin.getline(S1, sizeof(S1));

    cout << "������� ������� (�����) n: ";
    cin >> n;

    if (n >= 0 && n <= strlen(S)) {
        char result[1000];

        char* ptr_result = result;
        const char* ptr_S = S;
        const char* ptr_S1 = S1;
        
        strncpy(result, S, n);
        *(ptr_result + n) = '\0';
        strncat_s(result, sizeof(result), S1, _TRUNCATE);
        strcat(result, ptr_S + n);

        cout << "��������� �������: " << result << endl;
    }
    else {
        cout << "������: ������������ ������� �������." << endl;
    }

    return 0;
}
