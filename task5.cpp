#include "task5.h"

int maxDivider(int a, int b) {

    if (a == b) {
        return a;
    }

    int div;
    int c = a - b;

    if (c < 0) {
        c = -c;
        div = maxDivider(a, c);
    }
    else {
        div = maxDivider(b, c);
    }
    return div;

}


int task5()
{
    int var1, var2;
    cout << "Введите первое число: " << endl;
    cin >> var1;
    cout << "Введите второе число: " << endl;
    cin >> var2;

    cout << "НОД равен " << maxDivider(var1, var2) << endl;

    return 0;
}
