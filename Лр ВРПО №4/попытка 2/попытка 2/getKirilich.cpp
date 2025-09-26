#include <iostream>
#include <Windows.h>

using namespace std;

int getKirilich()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru");

    string input;

    cout << "Введите буквы (русский алфавит): ";

    cin >> input;

    for (unsigned char y : input) {
        if (!((((int)y >= (int)unsigned char('А') && (int)y <= (int)unsigned char('Я')) || (int)y == (int)unsigned char('Ё'))
            || (((int)y >= (int)unsigned char('а') && (int)y <= (int)unsigned char('я')) || (int)y == (int)unsigned char('ё')))) {
            cout << "\nВведена буква не русского алфавита";
            return 0;
        }
        int toUpperCaseCode = static_cast<int>(toupper(y));
        int toLowerCaseCode = static_cast<int>(tolower(y));

        int different = toLowerCaseCode - toUpperCaseCode;

        cout << "Разница значений кодов в Windows-1251 для буквы " << y << ": " << different << endl;
    }

    return 0;

}