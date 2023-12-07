#include <iostream>
#include <conio.h>
#include <iomanip> 
#include <stdio.h>
#include <cstdio>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    double a;
    printf_s("Введите число a: ");
    scanf_s("%lf", &a);

    double a2 = a * a; // возводим a во вторую степень
    double a4 = a2 * a2; // возводим a2 во вторую степень

    printf_s("Число a в четвертой степени: %.f\n", a4);

    return 0;
}
