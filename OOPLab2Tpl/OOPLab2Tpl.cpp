

#include <iostream>
#include<fstream>
#include<string>
using namespace std;
#include "Tasks.h"
#include "Examples.h"
#include<Windows.h>
#include<bitset>

/// @brief 
/// @return 
int main()
{
    SetConsoleOutputCP(1251);
    cout << "OOP. Template for Laboratory work #2.\n ";

    char ch = '5';
    do {
        system("cls");
        MenuTask();
        ch = cin.get();

        cin.get();

        switch (ch) {
        case '1': task1();       break;
        case '2': task2();       break;
        case '3': task3();       break;
        case '4': task4();       break;
        case '5': Examples();    break;
        case '6': return 0;
        }
        cout << "Press any key and enter\n";
        ch = cin.get();
    } while (ch = !6);
    std::string text[8];
    unsigned short rez[8][8];

    // Введення рядків
    for (int i = 0; i < 8; i++) {
        std::cout << "row " << i + 1 << ": ";
        std::getline(std::cin, text[i]);

        // Доповнення рядків пробілами до 8 символів
        while (text[i].length() < 8) {
            text[i] += ' ';
        }
    }

    // Шифрування тексту
    encrypt(text, rez);

    // Запис у бінарний файл
    std::ofstream outputFile("binary.dat", std::ios::binary);
    if (!outputFile) {
        std::cerr << "error open file." << std::endl;
        return 1;
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            outputFile.write(reinterpret_cast<const char*>(&rez[i][j]), sizeof(rez[i][j]));
        }
    }

    outputFile.close();

    // Вивід шифрованого тексту у бінарному вигляді (для перевірки)
    std::cout << "binartextSHIFR:" << std::endl;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            std::bitset<16> binary(rez[i][j]);
            std::cout << binary << std::endl;
        }
    }

    return 0;
    return 0;
}
