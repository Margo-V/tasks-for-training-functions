#include "task3.h"

int typeOfNums(int* arr, int length) {

    int positNums = 0;
    int negatNums = 0;
    int nullNums = 0;


    for (int i = 0; i < length; i++) {
        if (arr[i] < 0) {
            negatNums++;
        }
        else if (arr[i] == 0) {
            nullNums++;
        }
        else {
            positNums++;
        }
    }

    cout << "Количество положительных элементов в массиве: " << positNums << endl;
    cout << "Количество отрицательных элемнтов в массиве: " << negatNums << endl;
    cout << "Количество нулевых элементов в массиве: " << nullNums << endl;

    return 0;
}


void initArrayByUser() {
    int s;
    cout << "Сколько элементов вы хотите занести в массив:" << "\t";
    cin >> s;

    int* array = new int[s];

    cout << "\n\nОтлично! Заполните массив числами как положительными, так и отрицательными!" << endl;
    for (int i = 0; i < s; i++) {
        cin >> array[i];
    }

    typeOfNums(array, s);

    delete[] array;
    array = 0;
}

int generationNum() {

    int positNums = 0;
    int negatNums = 0;
    int nullNums = 0;

    const int size = 9;
    int array2[size];

    srand(time(0));
    for (int i = 0; i < size; i++) {
        array2[i] = rand() % 1000 - 500;
        if (array2[i] < 0) {
            negatNums++;
        }
        else if (array2[i] == 0) {
            nullNums++;
        }
        else {
            positNums++;
        }
    }

    cout << "Количество положительных элементов в массиве: " << positNums << endl;
    cout << "Количество отрицательных элемнтов в массиве: " << negatNums << endl;
    cout << "Количество нулевых элементов в массиве: " << nullNums << endl;

    return 0;
}


int task3()
{
    int ans = 0;

    cout << "Хотите занести элементы в массив самостоятельно(1)"
        << "или использовать рандомную генерацию(2)?" << endl;
    cin >> ans;
    switch (ans) {
    case 1: 
        initArrayByUser();
        break;
    case 2:
        generationNum();
        break;
    default: 
        cout << "Увы... такого значения не нашлось" << endl;
    }
    
     

    return 0;
}
