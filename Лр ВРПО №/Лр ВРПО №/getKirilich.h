#include <iostream>
#include <Windows.h>

using namespace std;

int kirilich()
{
    SetConsoleCP(1251);

    string input;

    cout << "¬ведите буквы (русский алфавит): ";

    cin >> input;

    for (char y : input) {
        int uppercaseCode = static_cast<int>(toupper(y));       //€вное допустимое приведение типа данных 
        int lowercaseCode = static_cast<int>(tolower(y));

        int diff = lowercaseCode - uppercaseCode;

        cout << "–азница значений кодов в Windows-1251 дл€ буквы " << y << ": " << diff << endl;
    }

    return 0;

}
