#include <iostream>
#include <Windows.h>

using namespace std;

int getKirilich()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru");

    string input;

    cout << "������� ����� (������� �������): ";

    cin >> input;

    for (unsigned char y : input) {
        if (!((((int)y >= (int)unsigned char('�') && (int)y <= (int)unsigned char('�')) || (int)y == (int)unsigned char('�'))
            || (((int)y >= (int)unsigned char('�') && (int)y <= (int)unsigned char('�')) || (int)y == (int)unsigned char('�')))) {
            cout << "\n������� ����� �� �������� ��������";
            return 0;
        }
        int toUpperCaseCode = static_cast<int>(toupper(y));
        int toLowerCaseCode = static_cast<int>(tolower(y));

        int different = toLowerCaseCode - toUpperCaseCode;

        cout << "������� �������� ����� � Windows-1251 ��� ����� " << y << ": " << different << endl;
    }

    return 0;

}