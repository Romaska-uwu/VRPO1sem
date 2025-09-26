#include <iostream>

using namespace std;

int latin()
{
    string input;

    cout << "Введите буквы (латинский алфавит): ";

    cin >> input;

    for (char x : input) {
        int uppercaseCode = toupper(x);
        int lowercaseCode = tolower(x);

        int diff = lowercaseCode - uppercaseCode;

        cout << "Разница значений кодов в Windows-1251 для буквы " << x << ": " << diff << endl;
    }

    return 0;

}