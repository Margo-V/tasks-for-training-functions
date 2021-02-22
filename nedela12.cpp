// nedela12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "task6.h"

using namespace std;



int main()
{   
    setlocale(LC_ALL, "ru");
    int userChoiseTask;
    bool answ = true;
    
    do {
        cout << "Выберите задание: \n\n"
            << "1 - Написать функцию, которая принимает две даты\n"
            << "(т.е.функция принимает шесть параметров) и вычисляет\n"
            << "разность в днях между этими датами.Для решения этой\n"
            << "задачи необходимо также написать функцию, которая\n"
            << "определяет, является ли год високосным.\n\n"
            << "2 - Написать функцию, определяющую среднее\n"
            << "арифметическое элементов передаваемого ей массива. \n\n"
            << "3 - Написать функцию, определяющую количество\n"
            << "положительных, отрицательных и нулевых элементов\n"
            << "передаваемого ей массива.\n\n"
            << "4 - Написать перегруженные функции (int, double,char)\n"
            << "для выполнения следующих задач :\n"
            << "Инициализация квадратной матрицы;\n"
            << "Вывод матрицы на экран;\n"
            << "Определение максимального и минимального элемента\n"
            << " на главной диагонали матрицы;\n"
            << "Сортировка элементов по возрастанию отдельно для\n"
            << " каждой строки матрицы. \n\n"
            << "5 - Написать рекурсивную функцию нахождения\n"
            << "наибольшего общего делителя двух целых чисел.\n\n"
            << "6 - Написать игру «Быки и коровы». Программа\n"
            << "«загадывает» четырёхзначное число и играющий должен\n"
            << "угадать его.После ввода пользователем числа программа\n"
            << "сообщает, сколько цифр числа угадано(быки) и сколько\n"
            << "цифр угадано и стоит на нужном месте(коровы).После\n"
            << "отгадывания числа на экран необходимо вывести количество сделанных\n"
            << "пользователем попыток.В программенеобходимо использовать рекурсию.\n\n";
        cin >> userChoiseTask;
        switch (userChoiseTask) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
            break;
        case 6:
            task6();
            break;
        case 7:
            answ = false;
            break;
        default:
            cout << "Нет такого значения, попробуйте еще раз" << endl;
        }

    } while (answ == true);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
