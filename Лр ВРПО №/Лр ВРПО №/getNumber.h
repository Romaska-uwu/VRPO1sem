#include <iostream>

using namespace std;

int number()
{
    string input;

    cout << "������� ���������� �����: ";

    cin >> input;


    for (char z : input) {
        int digitCode = '0' + (z - '0');

        cout << "��� �������, ���������������� ����� " << z << " � Windows-1251: " << digitCode << endl;

    }

    return 0;

}