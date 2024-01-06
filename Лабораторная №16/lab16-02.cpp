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
    cout << "Кол-во символов слова с максимальной длинной: " << maxWordLength(2, " j sgofdsj godfs", "В лучах заходящего солнца отражаются теплые оттенки осенних листьев.") << endl;
    cout << "Кол-во символов слова с максимальной длинной: " << maxWordLength(3, "Старый маяк стоял утром на скале, охраняя моря от ночных бурь.", "Аромат свежесваренного кофе наполнял уютную кухню ранним утром.", "Первые звезды начали мерцать на небесной сцене, словно драгоценные камни.") << endl;
    cout << "Кол-во символов слова с максимальной длинной: " << maxWordLength(4, "Тропический ливень начался, принося с собой запах свежевыпавшего дождя.", "На холодной зимней ночи луна освещала снежные вершины гор.", "Гитарные аккорды заполняли воздух, создавая неповторимую атмосферу на концерте под открытым небом.", "Я гей") << endl;

    return 0;
}
