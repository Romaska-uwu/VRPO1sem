#include "latin.h"
#include "number.h"
#include "kirilich.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    char choice;

    do {

        cout << "Выберите вариант использования:\n";
        cout << "1 - определение разницы значений кодов в Windows-1251 буквы латинского алфавита\n";
        cout << "2 - определение разницы значений кодов в Windows-1251 буквы русского алфавита\n";
        cout << "3 - вывод в консоль кода символа, соответствующего введенной цифре\n";
        cout << "4 - выход\n";

        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
        case '1':
            getLatin();
            break;

        case '2':
            getKirilich();
            break;

        case '3':
            getNumber();
            break;

        case '4':
            cout << "Программа завершена.\n";
            break;

        default:
            cout << "Неверный выбор. Пожалуйста, выберите правильный вариант.\n";
        }

        cout << endl;

    } while (choice != '4');

    return 0;
}