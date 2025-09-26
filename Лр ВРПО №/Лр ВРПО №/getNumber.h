#include <iostream>

using namespace std;

int number()
{
    string input;

    cout << "Введите десятичные цифры: ";

    cin >> input;


    for (char z : input) {
        int digitCode = '0' + (z - '0');

        cout << "Код символа, соответствующего цифре " << z << " в Windows-1251: " << digitCode << endl;

    }

    return 0;

}