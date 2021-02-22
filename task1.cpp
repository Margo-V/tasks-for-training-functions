#include "task1.h"

int leapYear1(int y1_1, int m1_1, int d1_1, int *days1_1, int *daysToYear1_1) {
    if (y1_1 % 4 == 0) {
        *days1_1 = 0, * daysToYear1_1 = 0;
        cout << y1_1 << " - високосный год" << endl;
        if (m1_1 == 1) {
            *days1_1 = 31 - d1_1;
            *daysToYear1_1 = *days1_1 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31;
            return *daysToYear1_1;
        }
        else if (m1_1 == 2) {
            *days1_1 = 29 - d1_1;
            *daysToYear1_1 = *days1_1 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31;
            return *daysToYear1_1;
        }
    }

}


int leapYear2(int *y2_1, int *m2_1, int *d2_1, int *days2_1, int *daysAfterYear2_1) {

    if (*y2_1 % 4 == 0) {
        cout << *y2_1 << " - високосный год" << endl;
        *days2_1 = 0, * daysAfterYear2_1 = 0;
        switch (*m2_1) {
        case 1:
            if (*d2_1 > 0 && *d2_1 < 32) {
                *days2_1 = 31 - *d2_1;
                *daysAfterYear2_1 += *d2_1;
            }
            else {
                cout << "В январе 31 день, введите корректную дату" << endl;
            }
            break;
        case 2:
            if (*d2_1 > 0 && *d2_1 < 30) {
                *days2_1 = 29 - *d2_1;
                *daysAfterYear2_1 = 31 + *d2_1;
            }
            else {
                cout << "В феврале 28 или 29 день, введите корректную дату" << endl;
            }
            break;
        case 3:
            if (*d2_1 > 0 && *d2_1 < 32) {
                *days2_1 = 31 - *d2_1;
                *daysAfterYear2_1 = 31 + 29 + *d2_1;
            }
            else {
                cout << "В марте 31 день, введите корректную дату" << endl;
            }
            break;
        case 4:
            if (*d2_1 > 0 && *d2_1 < 31) {
                *days2_1 = 30 - *d2_1;
                *daysAfterYear2_1 = 31 + 29 + 31 + *d2_1;
            }
            else {
                cout << "В апреле 30 день, введите корректную дату" << endl;
            }
            break;
        case 5:
            if (*d2_1 > 0 && *d2_1 < 32) {
                *days2_1 = 31 - *d2_1;
                *daysAfterYear2_1 = 31 + 29 + 31 + 30 + *d2_1;
            }
            else {
                cout << "В мае 31 день, введите корректную дату" << endl;
            }
            break;
        case 6:
            if (*d2_1 > 0 && *d2_1 < 31) {
                *days2_1 = 30 - *d2_1;
                *daysAfterYear2_1 = 31 + 29 + 31 + 30 + 31 + *d2_1;
            }
            else {
                cout << "В июне 30 день, введите корректную дату" << endl;
            }
            break;
        case 7:
            if (*d2_1 > 0 && *d2_1 < 32) {
                *days2_1 = 31 - *d2_1;
                *daysAfterYear2_1 = 31 + 29 + 31 + 30 + 31 + 30 + *d2_1;
            }
            else {
                cout << "В миюле 31 день, введите корректную дату" << endl;
            }
            break;
        case 8:
            if (*d2_1 > 0 && *d2_1 < 32) {
                *days2_1 = 31 - *d2_1;
                *daysAfterYear2_1 = 31 + 29 + 31 + 30 + 31 + 30 + 31 + *d2_1;
            }
            else {
                cout << "В августе 31 день, введите корректную дату" << endl;
            }
            break;
        case 9:
            if (*d2_1 > 0 && *d2_1 < 31) {
                *days2_1 = 30 - *d2_1;
                *daysAfterYear2_1 = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + *d2_1;
            }
            else {
                cout << "В сентябре 30 день, введите корректную дату" << endl;
            }
            break;
        case 10:
            if (*d2_1 > 0 && *d2_1 < 32) {
                *days2_1 = 31 - *d2_1;
                *daysAfterYear2_1 = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + *d2_1;
            }
            else {
                cout << "В октябре 31 день, введите корректную дату" << endl;
            }
            break;
        case 11:
            if (*d2_1 > 0 && *d2_1 < 31) {
                *days2_1 = 30 - *d2_1;
                *daysAfterYear2_1 = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + *d2_1;
            }
            else {
                cout << "В ноябре 30 день, введите корректную дату" << endl;
            }
            break;
        case 12:
            if (*d2_1 > 0 && *d2_1 < 32) {
                *days2_1 = 31 - *d2_1;
                *daysAfterYear2_1 = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + *d2_1;
            }
            else {
                cout << "В декабре 31 день, введите корректную дату" << endl;
            }
            break;
        default:
            cout << "Введите корректный месяц: " << endl;
        }
    }

    return 0;
}


int date(int m1, int d1, int y1, int d2, int m2, int y2 ) {
    
    enum months { January = 1, February, Martch, April, May, June, July, August, September, October, November, December };
    int daysInYear = 365;
    int userMonth;
    int days1 = 0;
    int days2 = 0;
    int daysToYear = 0;
    int daysAfterYear = 0;
 

    switch (m1) {
    case 1:
        if (d1 > 0 && d1 < 32) {
            days1 = 31 - d1;
            daysToYear = days1 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31;
        }
        else {
            cout << "В январе 31 день, введите корректную дату" << endl;
        }
        break;
    case 2:
        if (d1 > 0 && d1 < 30) {
            days1 = 28 - d1;
            cout << " " << endl;
            daysToYear = days1 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31;
        }
        else {
            cout << "В феврале 28 или 29 день, введите корректную дату" << endl;
        }
        break;
    case 3:
        if (d1 > 0 && d1 < 32) {
            days1 = 31 - d1;
            daysToYear = days1 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31;
        }
        else {
            cout << "В марте 31 день, введите корректную дату" << endl;
        }
        break;
    case 4:
        if (d1 > 0 && d1 < 31) {
            days1 = 30 - d1;
            daysToYear = days1 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31;
        }
        else {
            cout << "В апреле 30 день, введите корректную дату" << endl;
        }
        break;
    case 5:
        if (d1 > 0 && d1 < 32) {
            days1 = 31 - d1;
            daysToYear = days1 + 30 + 31 + 31 + 30 + 31 + 30 + 31;
        }
        else {
            cout << "В мае 31 день, введите корректную дату" << endl;
        }
        break;
    case 6:
        if (d1 > 0 && d1 < 31) {
            days1 = 30 - d1;
            daysToYear = days1 + 31 + 31 + 30 + 31 + 30 + 31;
        }
        else {
            cout << "В июне 30 день, введите корректную дату" << endl;
        }
        break;
    case 7:
        if (d1 > 0 && d1 < 32) {
            days1 = 31 - d1;
            daysToYear = days1 + 31 + 30 + 31 + 30 + 31;
        }
        else {
            cout << "В июле 31 день, введите корректную дату" << endl;
        }
        break;
    case 8:
        if (d1 > 0 && d1 < 32) {
            days1 = 31 - d1;
            daysToYear = days1 + 30 + 31 + 30 + 31;
        }
        else {
            cout << "В августе 31 день, введите корректную дату" << endl;
        }
        break;
    case 9:
        if (d1 > 0 && d1 < 31) {
            days1 = 30 - d1;
            daysToYear = days1 + 31 + 30 + 31;
        }
        else {
            cout << "В сентябре 30 день, введите корректную дату" << endl;
        }
        break;
    case 10:
        if (d1 > 0 && d1 < 32) {
            days1 = 31 - d1;
            daysToYear = days1 + 30 + 31;
        }
        else {
            cout << "В октябре 31 день, введите корректную дату" << endl;
        }
        break;
    case 11:
        if (d1 > 0 && d1 < 31) {
            days1 = 30 - d1;
            daysToYear = days1 + 31;
        }
        else {
            cout << "В ноябре 30 день, введите корректную дату" << endl;
        }
        break;
    case 12:
        if (d1 > 0 && d1 < 32) {
            days1 = 31 - d1;
            daysToYear = days1;
        }
        else {
            cout << "В декабре 31 день, введите корректную дату" << endl;
        }
        break;
    default:
        cout << "Введите корректный месяц: " << endl;
    }

    leapYear1(y1, m1, d1, &days1, &daysToYear);
    leapYear2(&y2, &m2, &d2, &days2, &daysAfterYear);

    int result = 0;

    if (y1 == y2) {
        if (y1 % 4 == 0) {
            result = daysAfterYear - (366 - daysToYear);
        }
        else {
            result = daysAfterYear - (365 - daysToYear);
        }
        return result;
    }
    else {
        int year1_1 = y1;
        int year2_2 = y2 -1;
        while (year1_1 < year2_2) {
            year1_1++;
            if (year1_1 % 4 == 0) {
                daysToYear += 366;
            }
            else {
                daysToYear += 365;
            }
        }            
    }

    switch (m2) {
    case 1:
        if (d2 > 0 && d2 < 32) {
            days2 = 31 - d2;
            daysAfterYear += d2;        
        }
        else {
            cout << "В январе 31 день, введите корректную дату" << endl;
        }
        break;
    case 2:
        if (d2 > 0 && d2 < 30) {
            days2 = 28 - d2;
            daysAfterYear = 31 + d2;
        }
        else {
            cout << "В феврале 28 или 29 день, введите корректную дату" << endl;
        }
        break;
    case 3:
        if (d2 > 0 && d2 < 32) {
            days2 = 31 - d2;
            daysAfterYear = 31 + 28 + days2;
        }
        else {
            cout << "В марте 31 день, введите корректную дату" << endl;
        }
        break;
    case 4:
        if (d2 > 0 && d2 < 31) {
            days2 = 30 - d2;
            daysAfterYear = 31 + 28 + 31 + d2;
        }
        else {
            cout << "В апреле 30 день, введите корректную дату" << endl;
        }
        break;
    case 5:
        if (d2 > 0 && d2 < 32) {
            days2 = 31 - d2;
            daysAfterYear = 31 + 28 + 31 + 30 + d2;
        }
        else {
            cout << "В мае 31 день, введите корректную дату" << endl;
        }
        break;
    case 6:
        if (d2 > 0 && d2 < 31) {
            days2 = 30 - d2;
            daysAfterYear = 31 + 28 + 31 + 30 + 31 + d2;
        }
        else {
            cout << "В июне 30 день, введите корректную дату" << endl;
        }
        break;
    case 7:
        if (d2 > 0 && d2 < 32) {
            days2 = 31 - d2;
            daysAfterYear = 31 + 28 + 31 + 30 + 31 + 30 + d2;
        }
        else {
            cout << "В миюле 31 день, введите корректную дату" << endl;
        }
        break;
    case 8:
        if (d2 > 0 && d2 < 32) {
            days2 = 31 - d2;
            daysAfterYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d2;
        }
        else {
            cout << "В августе 31 день, введите корректную дату" << endl;
        }
        break;
    case 9:
        if (d2 > 0 && d2 < 31) {
            days2 = 30 - d2;
            daysAfterYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d2;
        }
        else {
            cout << "В сентябре 30 день, введите корректную дату" << endl;
        }
        break;
    case 10:
        if (d2 > 0 && d2 < 32) {
            days2 = 31 - d2;
            daysAfterYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d2;
        }
        else {
            cout << "В октябре 31 день, введите корректную дату" << endl;
        }
        break;
    case 11:
        if (d2 > 0 && d2 < 31) {
            days2 = 30 - d2;
            daysAfterYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d2;
        }
        else {
            cout << "В ноябре 30 день, введите корректную дату" << endl;
        }
        break;
    case 12:
        if (d2 > 0 && d2 < 32) {
            days2 = 31 - d2;
            daysAfterYear = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d2;
        }
        else {
            cout << "В декабре 31 день, введите корректную дату" << endl;
        }
        break;
    default:
        cout << "Введите корректный месяц: " << endl;
    }
    leapYear2( &y2, &m2, &d2, &days2, &daysAfterYear);

    daysToYear += daysAfterYear;
       
    return daysToYear;
}


int task1()
{
    int day1, day2, month1, month2, year1, year2;
    int days1, days2;
    int daysToYear = 0;
    int daysAfterYear = 0;
    int month = 0;
    int year = 0;

    cout << "Введите сначала меньшую дату, затем позднюю" << endl;
    cout << "Введите первую дату - число дня: " << endl;
    cin >> day1;

    cout << "Номер месяца: " << endl;
    cin >> month1;

    cout << "Год: " << endl;
    cin >> year1;

    cout << "Введите вторую дату - число дня: " << endl;
    cin >> day2;

    cout << "Номер месяца: " << endl;
    cin >> month2;

    cout << "Год: " << endl;
    cin >> year2;


    cout << date(month1, day1, year1, day2, month2, year2) << " - Всего дней между " << day1 << "." << month1 << "." << year1 << " и " << day2 << "." << month2 << "." << year2 << endl;

    return 0;
}
