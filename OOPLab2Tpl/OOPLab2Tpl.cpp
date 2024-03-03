

#include <iostream>
using namespace std;
#include "Tasks.h"
#include "Examples.h"
#include<Windows.h>


/// @brief 
/// @return 
int main()
{
    SetConsoleOutputCP(1251);
    cout << "OOP. Template for laboratory work #2.\n";

    char ch = '5';
    do {
        system("cls");
        MenuTask();
        ch = cin.get();
        
        cin.get();

        switch (ch) {
        case '1': task1();   break;
        case '2': task1();   break;
        case '3': task1();   break;
        case '4': task1();   break;
		case '5':  Examples(); break;
		case '6': return 0;
	    }
        cout << " Press any key and enter\n";
        ch = cin.get();
    } while (ch != '6');

    return 0;
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
}
void task2()
{
    // Задано 8 рядків тексту. У рядку до 8 символів. Доповнити пробілами рядки до 8 символів.
    //Шифрувати тексти таким чином, щоб кожний символ тексту записувався у два байти.Два байти
    // мають таку структуру:
    //труктуру:
  //  у бітах 0 - 2 знаходиться номер рядка символу(3 біти),
     //   у бітах 3 - 6 молодша частина ASCII - коду символу(4 біти),
     //   7 біт – біт парності перших двох полів(1 біт)
     //   у бітах 8 - 11 старша частина ASCII - коду символу(4 біти),
     //   у бітах 12 - 14 позиція символу в рядку(3 біти),
    //    15 біт - біт парності попередніх двох полів(1 біт).
    cout << " Data encryption using bitwise operations  \n";

}
