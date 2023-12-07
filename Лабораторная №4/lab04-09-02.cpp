#include <iostream>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int question;

    std::cout << "Привет! Что ты хочешь узнать?\n";
    std::cout << "1. Какая погода сегодня?\n";
    std::cout << "2. Какой день недели?\n";
    std::cout << "Выбери вопрос (1 или 2): ";
    std::cin >> question;

    switch (question) {
    case 1:
        std::cout << "Сегодня солнечная погода.\n";
        break;
    case 2:
        std::cout << "Сегодня понедельник.\n";
        break;
    default:
        std::cout << "Некорректный выбор вопроса.\n";
        return 0;
    }

    std::cout << "Ещё что-то интересно? (1 - Да, 2 - Нет): ";
    std::cin >> question;
        
    switch (question) {
    case 1:
        std::cout << "Что тебя ещё интересует?\n";
        break;
    case 2:
        std::cout << "Хорошего дня! \n";
        break;
    default:
        std::cout << "Некорректный выбор.\n";
        break;
    }

    return 0;
}

