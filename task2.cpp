#include "task2.h"


int avarageOfArray(int *arr, int size) {


    double avar = 0;
    for (int i = 0; i < size; i++) {
        avar += arr[i];
    }
    avar /= static_cast<double>(size);

    cout << "������� �������������� ��������� �������: " << avar << endl;

    return 0;
}




int task2()
{
    int s;
    cout << "������� ��������� �� ������ ������� � ������:" << "\t";
    cin >> s;

    int *array = new int[s];

    cout << "\n\n�������! ��������� ������ �������!" << endl;
    for (int i = 0; i < s; i++) {
        cin >> array[i];
    }

    avarageOfArray(array,s);


    delete[] array;
    array = 0;


    return 0;
}
