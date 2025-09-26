#include <iostream>
#include "getNumber.h"

using namespace std;

int getNumber()
{
    string input;

    cout << "Введите десятичные цифры: ";

    cin >> input;


    for (char z : input) {
        if (!((int)z >= (int)'0' && (int)z <= (int)'9')) {
            cout << "\nВведена не десятичная цифра";
            return 0;
        }

        cout << "Код символа, соответствующего цифре " << z << " в Windows-1251: " << (int)z << endl;

    }

    return 0;

}