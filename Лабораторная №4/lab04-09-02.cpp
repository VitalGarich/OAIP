#include <iostream>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int question;

    std::cout << "������! ��� �� ������ ������?\n";
    std::cout << "1. ����� ������ �������?\n";
    std::cout << "2. ����� ���� ������?\n";
    std::cout << "������ ������ (1 ��� 2): ";
    std::cin >> question;

    switch (question) {
    case 1:
        std::cout << "������� ��������� ������.\n";
        break;
    case 2:
        std::cout << "������� �����������.\n";
        break;
    default:
        std::cout << "������������ ����� �������.\n";
        return 0;
    }

    std::cout << "��� ���-�� ���������? (1 - ��, 2 - ���): ";
    std::cin >> question;
        
    switch (question) {
    case 1:
        std::cout << "��� ���� ��� ����������?\n";
        break;
    case 2:
        std::cout << "�������� ���! \n";
        break;
    default:
        std::cout << "������������ �����.\n";
        break;
    }

    return 0;
}

