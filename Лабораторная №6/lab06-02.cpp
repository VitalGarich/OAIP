#include <iostream>
using namespace std;

int main() {
    for (int i = 1000; i < 10000; i++) {
        int num = i;
        bool unique = true;
        bool digits[10] = { false };

        while (num > 0) 
        {
            int digit = num % 10;
            if (digits[digit])
            {
                unique = false;
                break;
            }
            digits[digit] = true;
            num /= 10;
        }

        if (unique)
        {
            cout << i << " ";
        }
    }

    return 0;
}