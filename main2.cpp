#include "stack2.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size;
    cout << "Введіть розмір стеку: ";
    cin >> size;
    Stack s(size); 
    char choice;
    char c;
    do {
        cout << "\nМеню:\n";
        cout << "1. Внести символ в стек\n";
        cout << "2. Видалити символ зі стеку\n";
        cout << "3. Підрахувати кількість символів в стеці\n";
        cout << "4. Перевірити, чи стек порожній\n";
        cout << "5. Перевірити, чи стек повний\n";
        cout << "6. Очистити стек\n";
        cout << "7. Отримати без видалення верхній символ в стеці\n";
        cout << "8. Вийти з програми\n";
        cout << "Введіть ваш вибір: ";
        cin >> choice;
        switch (choice) {
        case '1':
            cout << "Введіть символ, який хочете внести в стек: ";
            cin >> c;
            s.push(c);
            break;
        case '2':
            c = s.pop();
            if (c != '\0') {
                cout << "Символ, який був видалений зі стеку: " << c << "\n";
            }
            break;
        case '3':
            cout << "Кількість символів в стеці: " << s.count() << "\n";
            break;
        case '4':
            if (s.isEmpty()) {
                cout << "Стек порожній\n";
            }
            else {
                cout << "Стек не порожній\n";
            }
            break;
        case '5':
            if (s.isFull()) {
                cout << "Стек повний\n";
            }
            else {
                cout << "Стек не повний\n";
            }
            break;
        case '6':
            s.clear();
            cout << "Стек очищено\n";
            break;
        case '7':
            c = s.peek();
            if (c != '\0') {
                cout << "Верхній символ в стеці: " << c << "\n";
            }
            break;
        case '8':
            cout << "Виходимо з програми\n";
            break;
        default:
            cout << "Невірний вибір, спробуйте ще раз\n";
            break;
        }
    } while (choice != '8');
    return 0;
}