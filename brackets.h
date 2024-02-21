#ifndef BRACKETS_H
#define BRACKETS_H

#include <string>
#include <stack>

using namespace std;

bool isOpening(char c);
bool isClosing(char c);
bool isMatching(char open, char close);
bool checkBrackets(const string& s);

#endif 
