#include "task4.h"

//int
int sortArrayINT(int** arr, int a, int b) {
    cout << "\n\nСортировка Массива по строкам: \n\n";
    for (int i = 0; i < a; i++) {     
        for (int j = 0; j < b; j++) {
            int minElem = arr[i][j];
            int temp =j;
            for (int p = j; p < b; p++) {
                if (minElem > arr[i][p]) {
                    temp = p;
                    minElem = arr[i][p];
                }
            }
            swap(arr[i][j], arr[i][temp]);
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
//********
int MinManInDiagINT(int **arr, int a, int b) {
    int min = arr[0][0];
    int max = arr[0][0];

    cout << "Числа из главной диагогнали: \n\n";
    for (int i = 0, j = 0; i < a, j < b; i++, j++) {
        cout << arr[i][j] << "\t";
        if (max < arr[i][j]) {
            max = arr[i][j];
        }
        else if (min > arr[i][j]) {
            min = arr[i][j];
        }
    }

    cout << "\n\nМаксимальное значение из главной диагонали: " << max << endl;

    cout << "\nМинимальное значение из главной диагонали: " << min << endl;

    return 0;
}
//********
int outpuArrayINT(int** arr,  int a, int b) {
    cout << "Your array: \n\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n\n";

    return 0;
}
//********
void initArrayINT() {
    //srand(time(0));
    int row;
    int col;
    cout << "*******Массив INT******* \n\n";
    cout << "Для квадратной матрицы введите одинаковое количество строк и столбцов\n " <<
        "Введите количество строк: " << endl;
    cin >> row;
    cout << "Введите количество столбцов: " << endl;
    cin >> col;

    cout << "\n\n";
    int** arr = new int *[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = rand() % 45;
        }
    }
    outpuArrayINT(arr, row, col);
    MinManInDiagINT( arr, row, col );
    sortArrayINT(arr, row, col);


    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[]arr;

    cout << "\n\n\n";
}


//double
double sortArrayDOUBLE(double** arr, int a, int b) {
    cout << "\n\nСортировка Массива по строкам: \n\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            double minElem = arr[i][j];
            int temp = j;
            for (int p = j; p < b; p++) {
                if (minElem > arr[i][p]) {
                    temp = p;
                    minElem = arr[i][p];
                }
            }
            swap(arr[i][j], arr[i][temp]);
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
//********
double MinManInDiagDOUBLE(double** arr, int a, int b) {
    double min = arr[0][0];
    double max = arr[0][0];

    cout << "Числа из главной диагогнали: \n\n" ;
    for (int i = 0, j = 0; i < a, j < b; i++, j++) {
        cout << arr[i][j] << "\t";
        if (max < arr[i][j]) {
            max = arr[i][j];
        }
        else if (min > arr[i][j]) {
            min = arr[i][j];
        }
    }

    cout << "\n\nМаксимальное значение из главной диагонали: " << max << endl;

    cout << "\nМинимальное значение из главной диагонали: " << min << endl;

    return 0;
}
//********
double outpuArrayDOUBLE(double** arr, int a, int b) {
    cout << "Your array: \n\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n\n";

    return 0;
}
//********
void initArrayDOUBLE() {
    //srand(time(0));
    int row;
    int col;
    cout << "*******Массив DOUBLE******* \n\n";
    cout << "Для квадратной матрицы введите одинаковое количество строк и столбцов\n " <<
        "Введите количество строк: " << endl;
    cin >> row;
    cout << "Введите количество столбцов: " << endl;
    cin >> col;

    cout << "\n\n";
    double** arr = new double* [row];
    for (int i = 0; i < row; i++) {
        arr[i] = new double[col];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = 2 +rand() % 30 / static_cast<double>(rand() % 10 + 1);
        }
    }
    outpuArrayDOUBLE(arr, row, col);
    MinManInDiagDOUBLE(arr, row, col);
    sortArrayDOUBLE(arr, row, col);


    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[]arr;

    cout << "\n\n\n";
}


//char
char sortArrayCHAR(char** arr, int a, int b) {
    cout << "\n\nСортировка Массива по строкам: \n\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            char minElem = arr[i][j];
            int temp = j;
            for (int p = j; p < b; p++) {
                if (minElem > arr[i][p]) {
                    temp = p;
                    minElem = arr[i][p];
                }
            }
            swap(arr[i][j], arr[i][temp]);
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
//********
char MinManInDiagCHAR(char** arr, int a, int b) {
    char min = arr[0][0];
    char max = arr[0][0];

    cout << "Числа из главной диагогнали: \n\n";
    for (int i = 0, j = 0; i < a, j < b; i++, j++) {
        cout << arr[i][j] << "\t";
        if (max < arr[i][j]) {
            max = arr[i][j];
        }
        else if (min > arr[i][j]) {
            min = arr[i][j];
        }
    }

    cout << "\n\nМаксимальное значение из главной диагонали: " << max << endl;
    cout << "\nМинимальное значение из главной диагонали: " << min << endl;

    return 0;
}
//********
char outpuArrayCHAR(char** arr, int a, int b) {
    cout << "Your array: \n\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n\n";

    return 0;
}
//********
void initArrayCHAR() {
    //srand(time(0));
    int row;
    int col;
    cout << "*******Массив CHAR******* \n\n";
    cout << "Для квадратной матрицы введите одинаковое количество строк и столбцов\n " <<
        "Введите количество строк: " << endl;
    cin >> row;
    cout << "Введите количество столбцов: " << endl;
    cin >> col;

    cout << "\n\n";
    char** arr = new char* [row];
    for (int i = 0; i < row; i++) {
        arr[i] = new char[col];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = 95 + rand() % 28;
        }
    }
    outpuArrayCHAR(arr, row, col);
    MinManInDiagCHAR(arr, row, col);
    sortArrayCHAR(arr, row, col);



    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[]arr;


    cout << "\n\n\n";
}


int task4()
{
    initArrayINT();
    initArrayDOUBLE();
    initArrayCHAR();

    return 0;
}
