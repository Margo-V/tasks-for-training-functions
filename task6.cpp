#include "task6.h"

int tries = 0;
string userNum();
string resultFunc(int count);
//БЫКИ
int bools(string num2, string numRand2);

//КОРОВЫ
bool cows(string num1, string numRand1);

string checkNum(string num, string numRand);

string gathered(string a);

int randomNum();



int task6()
{
   
    randomNum();

    return 0;
}



string userNum() {
    string user_num;

    cout << "Введите четырехзначное число: " << endl;
    cin >> user_num;
    if (user_num.length() != 4) {
        userNum();
    }

    return user_num;
}

int randomNum() {
    //int tries = 0;
    int numRandom = 1000 + rand() % 9999;
    //cout << numRandom << endl;

    const string s = to_string(numRandom);
    int lengthNumRand = s.length();  


    gathered(s);
    

    return 0;
}

string checkNum(string num, string numRand) {
    string res = "Еееее  Вы угадали!";
    bools(num, numRand);
    //cows(num, numRand);

    if (cows(num, numRand)) {
        return res;
    }
    else {
        return "Not OK";
    }
}
string resultFunc(int count ) {

    cout << "\nУрааа! Вы выиграли!" << endl;

    return "0";
}

string gathered(string a) {
    tries++;
    //checkNum(userNum(),a);

    if (checkNum(userNum(), a) == "Еееее  Вы угадали!") {
        cout << "\nПопыток использовано: " << tries << endl;
        return resultFunc(tries);
    }
    else {
        return gathered(a);
    }
}

//БЫКИ
int bools(string num2, string numRand2 ) {
    int trueNum = 0;
    string numCopy = num2;
    string replaceWith = "/";
    unsigned int lengthR2 = numRand2.length();
    unsigned int lengthUserNum = numCopy.length();

    for (unsigned int i = 0; i < lengthR2; i++) {
        //cout << "numRand[" << i << "] =" << numRand[i] << "\n";
        for (unsigned int j = 0; j < lengthUserNum; j++) {
            if (numCopy[j] == numRand2[i]) {
                trueNum++;
                numCopy.replace(numCopy.find(numCopy[j]), 1, replaceWith);
            }
        }
    }
    cout << "\n--------Общее количество совпадений(БЫКИ): " << trueNum << endl;

    return 0;
}

//КОРОВЫ
bool cows(string num1, string numRand1) {
    bool result;
    int trueNum = 0;
    int truePlaceNum = 0;

    for (unsigned int i = 0; i < num1.length(); i++) {
        //cout << num1[i] << "\t";
        //cout << numRand1[i] << endl;
        if (num1[i] == numRand1[i]) {
            truePlaceNum++;        
        }
    }
    cout << "\n--------Стоит на нужном месте чисел(КОРОВЫ): " << truePlaceNum << "\n\n";

    if (truePlaceNum == 4) {
        result = true;
    }
    else {
        result = false;
    }
    return result;
}
