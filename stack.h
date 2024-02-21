#ifndef STACK_H
#define STACK_H

#include <iostream>

class Stack {
private:
    char* data;
    int size;
    int top;
public:
    Stack(int size);
    ~Stack();
    void push(char c);
    char pop();
    int count();
    bool isEmpty();
    bool isFull();
    void clear();
    char peek();
};

#endif 
