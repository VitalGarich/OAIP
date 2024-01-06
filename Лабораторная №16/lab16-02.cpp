#include <iostream>
#include <cstdarg>
#include <string>
#include <sstream>

using namespace std;

int maxWordLength(int count, ...) {
    va_list args;
    va_start(args, count);

    int maxWordLength = 0;

    for (int i = 0; i < count; ++i) {
        const char* sentence = va_arg(args, const char*);
        istringstream iss(sentence);

        string word;
        while (iss >> word) {
            int currentWordLength = word.size();
            if (currentWordLength > maxWordLength) {
                maxWordLength = currentWordLength;
            }
        }
    }

    va_end(args);

    return maxWordLength;
}

int main() {
    setlocale(LC_ALL, "ru");
    cout << "���-�� �������� ����� � ������������ �������: " << maxWordLength(2, " j sgofdsj godfs", "� ����� ���������� ������ ���������� ������ ������� ������� �������.") << endl;
    cout << "���-�� �������� ����� � ������������ �������: " << maxWordLength(3, "������ ���� ����� ����� �� �����, ������� ���� �� ������ ����.", "������ ��������������� ���� �������� ������ ����� ������ �����.", "������ ������ ������ ������� �� �������� �����, ������ ����������� �����.") << endl;
    cout << "���-�� �������� ����� � ������������ �������: " << maxWordLength(4, "����������� ������ �������, ������� � ����� ����� �������������� �����.", "�� �������� ������ ���� ���� �������� ������� ������� ���.", "�������� ������� ��������� ������, �������� ������������ ��������� �� �������� ��� �������� �����.", "� ���") << endl;

    return 0;
}
