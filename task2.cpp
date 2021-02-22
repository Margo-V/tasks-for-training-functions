#include "task2.h"


int avarageOfArray(int *arr, int size) {


    double avar = 0;
    for (int i = 0; i < size; i++) {
        avar += arr[i];
    }
    avar /= static_cast<double>(size);

    cout << "Среднее арифметическое элементов массива: " << avar << endl;

    return 0;
}




int task2()
{
    int s;
    cout << "Сколько элементов вы хотите занести в массив:" << "\t";
    cin >> s;

    int *array = new int[s];

    cout << "\n\nОтлично! Заполните массив числами!" << endl;
    for (int i = 0; i < s; i++) {
        cin >> array[i];
    }

    avarageOfArray(array,s);


    delete[] array;
    array = 0;


    return 0;
}
