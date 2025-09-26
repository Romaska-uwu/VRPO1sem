#include <iostream>

using namespace std;

int getLatin()
{
    string input;

    cout << "������� ����� (��������� �������): ";

    cin >> input;

    for (char x : input) {
        if (!(((int)x >= (int)'A' && (int)x <= (int)'Z') || ((int)x >= (int)'a' && (int)x <= (int)'z'))) {
            cout << "\n������� ����� �� ���������� ��������";
            return 0;
        }
        int toUpperCaseCode = toupper(x);
        int toLowerCaseCode = tolower(x);

        int different = toLowerCaseCode - toUpperCaseCode;

        cout << "������� �������� ����� � Windows-1251 ��� ����� " << x << ": " << different << endl;
    }

    return 0;

}