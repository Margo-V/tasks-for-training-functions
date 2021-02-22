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

    cout << "���������� ������������� ��������� � �������: " << positNums << endl;
    cout << "���������� ������������� �������� � �������: " << negatNums << endl;
    cout << "���������� ������� ��������� � �������: " << nullNums << endl;

    return 0;
}


void initArrayByUser() {
    int s;
    cout << "������� ��������� �� ������ ������� � ������:" << "\t";
    cin >> s;

    int* array = new int[s];

    cout << "\n\n�������! ��������� ������ ������� ��� ��������������, ��� � ��������������!" << endl;
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

    cout << "���������� ������������� ��������� � �������: " << positNums << endl;
    cout << "���������� ������������� �������� � �������: " << negatNums << endl;
    cout << "���������� ������� ��������� � �������: " << nullNums << endl;

    return 0;
}


int task3()
{
    int ans = 0;

    cout << "������ ������� �������� � ������ ��������������(1)"
        << "��� ������������ ��������� ���������(2)?" << endl;
    cin >> ans;
    switch (ans) {
    case 1: 
        initArrayByUser();
        break;
    case 2:
        generationNum();
        break;
    default: 
        cout << "���... ������ �������� �� �������" << endl;
    }
    
     

    return 0;
}
