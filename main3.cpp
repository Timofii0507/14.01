#include "brackets.h"
#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "������ ����� �������, ������� ���� ����� � \";\": \n";
    string input;
    getline(cin, input);
    checkBrackets(input);
    return 0;
}
