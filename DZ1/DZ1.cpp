

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

HANDLE hConsole;



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 15); 

    cout << " №1       " << endl;
    // Вывести на экран один куплет любимого стихотворения
    // или песни, с указанием автора или исполнителя. Используйте
    // escape - последовательности для форматирования.
    cout << "Ну, а мы в эфире обитаем,\n"
        << "Мы во льду астральной вышины\n"
        << "Юности и старости не знаем,\n"
        << "Возраста и пола лишены.\n";


    cout << " №2     " << endl;

     // Вывести на экран стих «Every hunter wants…» таким образом, чтобы каждый «цвет» начинался с новой строки и
     // соответствующим количеством табуляций.

    SetConsoleTextAttribute(hConsole, 12);
    cout << "Каждый - Красный\n";
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\tОхотник - Оранжевый\n";
    SetConsoleTextAttribute(hConsole, 14);
    cout << "\t\tЖелает - Желтый\n";
    SetConsoleTextAttribute(hConsole, 10);
    cout << "\t\t\tЗнать - Зелёный\n";
    SetConsoleTextAttribute(hConsole, 11);
    cout << "\t\t\t\tГде - Голубой\n";
    SetConsoleTextAttribute(hConsole, 9);
    cout << "\t\t\t\t\tСидит - Синий\n";
    SetConsoleTextAttribute(hConsole, 5);
    cout << "\t\t\t\t\t\tФазан - Фиолетовый\n";


    SetConsoleTextAttribute(hConsole, 15);
    cout << " №3    " << endl;

    // Напишите объявление о продаже чего-нибудь и выведите его на экран, в том виде как оно должно было бы быть
    // напечатано.
    
    cout << "\t\t---------------------------\n";
    cout << "\t\t|" << "Продам диван." << "\t\t  |\n";
    cout << "\t\t|" << "Изношеность - средняя." << "\t  |\n";
    cout << "\t\t|" << "Цена - 2500 Евро." << "\t  |\n";
    cout << "\t\t|" << "..." << "\t\t\t  |\n";
    cout << "\t\t|" << "Телефон: 8 800 555 35 35" << " |\n";
    cout << "\t\t---------------------------\n";
}

