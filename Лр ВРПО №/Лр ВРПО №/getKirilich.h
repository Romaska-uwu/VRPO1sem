#include <iostream>
#include <Windows.h>

using namespace std;

int kirilich()
{
    SetConsoleCP(1251);

    string input;

    cout << "������� ����� (������� �������): ";

    cin >> input;

    for (char y : input) {
        int uppercaseCode = static_cast<int>(toupper(y));       //����� ���������� ���������� ���� ������ 
        int lowercaseCode = static_cast<int>(tolower(y));

        int diff = lowercaseCode - uppercaseCode;

        cout << "������� �������� ����� � Windows-1251 ��� ����� " << y << ": " << diff << endl;
    }

    return 0;

}
