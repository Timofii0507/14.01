#include "brackets.h"
#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "¬вед≥ть р€док символ≥в, ознакою к≥нц€ €кого Ї \";\": \n";
    string input;
    getline(cin, input);
    checkBrackets(input);
    return 0;
}
