#include "stack2.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size;
    cout << "������ ����� �����: ";
    cin >> size;
    Stack s(size); 
    char choice;
    char c;
    do {
        cout << "\n����:\n";
        cout << "1. ������ ������ � ����\n";
        cout << "2. �������� ������ � �����\n";
        cout << "3. ϳ��������� ������� ������� � �����\n";
        cout << "4. ���������, �� ���� �������\n";
        cout << "5. ���������, �� ���� ������\n";
        cout << "6. �������� ����\n";
        cout << "7. �������� ��� ��������� ������ ������ � �����\n";
        cout << "8. ����� � ��������\n";
        cout << "������ ��� ����: ";
        cin >> choice;
        switch (choice) {
        case '1':
            cout << "������ ������, ���� ������ ������ � ����: ";
            cin >> c;
            s.push(c);
            break;
        case '2':
            c = s.pop();
            if (c != '\0') {
                cout << "������, ���� ��� ��������� � �����: " << c << "\n";
            }
            break;
        case '3':
            cout << "ʳ������ ������� � �����: " << s.count() << "\n";
            break;
        case '4':
            if (s.isEmpty()) {
                cout << "���� �������\n";
            }
            else {
                cout << "���� �� �������\n";
            }
            break;
        case '5':
            if (s.isFull()) {
                cout << "���� ������\n";
            }
            else {
                cout << "���� �� ������\n";
            }
            break;
        case '6':
            s.clear();
            cout << "���� �������\n";
            break;
        case '7':
            c = s.peek();
            if (c != '\0') {
                cout << "������ ������ � �����: " << c << "\n";
            }
            break;
        case '8':
            cout << "�������� � ��������\n";
            break;
        default:
            cout << "������� ����, ��������� �� ���\n";
            break;
        }
    } while (choice != '8');
    return 0;
}