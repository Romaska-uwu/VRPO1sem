#include <iostream>
#include "getNumber.h"

using namespace std;

int getNumber()
{
    string input;

    cout << "������� ���������� �����: ";

    cin >> input;


    for (char z : input) {
        if (!((int)z >= (int)'0' && (int)z <= (int)'9')) {
            cout << "\n������� �� ���������� �����";
            return 0;
        }

        cout << "��� �������, ���������������� ����� " << z << " � Windows-1251: " << (int)z << endl;

    }

    return 0;

}