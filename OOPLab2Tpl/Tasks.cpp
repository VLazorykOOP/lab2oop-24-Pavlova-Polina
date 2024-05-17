#include <iostream>
using namespace std;
#include "Tasks.h"
#include "Examples.h"
#include"Windows.h"
#include <bitset>
#include<fstream>
#include<string>
void MenuTask()
{
    SetConsoleOutputCP(1251);
    cout << "     Menu Task   \n";
    cout << "    1.  Calculation of expressions using bitwise operations  \n";
    cout << "    2.  Data encryption using bitwise operations \n";
    cout << "    3.  Data encryption using structures with bit fields \n";
    cout << "    4.  The problem of using bitwise operations \n";
    cout << "    5.  Examples of problems using bitwise operations \n";
    cout << "    6.  Exit \n";
}
void task1() {
    //Обчислення виразу використовуючи тільки побітові операції.
 //Вираз: (127*а+32*с)/(4096)-d*1200+b*131.
    int a, b, c, d, x, y;
    cout << "Приклад обчислення виразу використовуючи тільки побітові операції\n";
    cout << "Приклад: y=((127*a+32*c)/(4096))-d*1200+b*131\n";
    cout << "Введіть a,b: " << endl;
    cin >> a >> b;
    cout << "Введіть c,d: " << endl;
    cin >> c >> d;
    x = ((((a << 7) - a) + (c << 5)) >> 12) - (d << 10) + (d << 7) + (d << 5) + (d << 4) + ((b << 7) + (b << 1) + b);
    y = ((127 * a + 32 * c) / (4096)) - d * 1200 + b * 131;
    cout << " x=" << x << " a=" << a << " b=" << b << " c=" << c << " d=" << d << " y=" << y << endl;
}

void task2()
{
    // Функція для шифрування тексту
    void encrypt(const std::string text[8], unsigned short rez[8][8]) {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                unsigned short r = 0;
                unsigned char c = text[i][j];

                r |= i;        // Номер рядка (3 біти)
                r |= j << 3;   // Позиція символу в рядку (3 біти)

                // Біт парності для номера рядка і позиції
                bool parity1 = (std::bitset<8>(r).count() % 2) == 0;
                r |= (parity1 ? 0 : 1) << 6;

                // ASCII-код символу
                r |= (static_cast<unsigned short>(c) << 7);

                // Біт парності для ASCII-коду
                bool parity2 = (std::bitset<16>(r).count() % 2) == 0;
                r |= (parity2 ? 0 : 1) << 15;

                rez[i][j] = r;
            }
        }
    }


}

void task3()
{
    // Шифрування даних з використання стуктур з бітовими полями 
    // Data encryption using structures with bit fields
    cout << "  Data encryption using structures with bit fields \n";
}


void task4()
{   // Задача із використання побітових операцій
    // The problem of using bitwise operations
    cout << " Data encryption using structures with bit fields \n";

}


