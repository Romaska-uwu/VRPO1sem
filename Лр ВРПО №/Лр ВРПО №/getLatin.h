#include <iostream>

using namespace std;

int latin()
{
    string input;

    cout << "������� ����� (��������� �������): ";

    cin >> input;

    for (char x : input) {
        int uppercaseCode = toupper(x);
        int lowercaseCode = tolower(x);

        int diff = lowercaseCode - uppercaseCode;

        cout << "������� �������� ����� � Windows-1251 ��� ����� " << x << ": " << diff << endl;
    }

    return 0;

}