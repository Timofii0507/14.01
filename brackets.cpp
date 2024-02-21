#include "brackets.h"
#include <iostream>

bool isOpening(char c) {
    return c == '(' || c == '[' || c == '{';
}

bool isClosing(char c) {
    return c == ')' || c == ']' || c == '}';
}

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
        (open == '[' && close == ']') ||
        (open == '{' && close == '}');
}

bool checkBrackets(const string& s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (isOpening(s[i])) {
            st.push(s[i]);
        }
        else if (isClosing(s[i])) {
            if (st.empty()) {
                cout << "Некоректний рядок: \n";
                cout << s << "\n";
                cout << string(i, ' ') << "^\n";
                return false;
            }
            char top = st.top();
            st.pop();
            if (!isMatching(top, s[i])) {
                cout << "Некоректний рядок: \n";
                cout << s << "\n";
                cout << string(i, ' ') << "^\n";
                return false;
            }
        }
    }
    if (!st.empty()) {
        cout << "Некоректний рядок: \n";
        cout << s << "\n";
        cout << string(s.length() - 1, ' ') << "^\n";
        return false;
    }
    cout << "Коректний рядок: \n";
    cout << s << "\n";
    return true;
}
