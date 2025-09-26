#include <iostream>

using namespace std;

int getLatin()
{
    string input;

    cout << "Введите буквы (латинский алфавит): ";

    cin >> input;

    for (char x : input) {
        if (!(((int)x >= (int)'A' && (int)x <= (int)'Z') || ((int)x >= (int)'a' && (int)x <= (int)'z'))) {
            cout << "\nВведена буква не латинского алфавита";
            return 0;
        }
        int toUpperCaseCode = toupper(x);
        int toLowerCaseCode = tolower(x);

        int different = toLowerCaseCode - toUpperCaseCode;

        cout << "Разница значений кодов в Windows-1251 для буквы " << x << ": " << different << endl;
    }

    return 0;

}