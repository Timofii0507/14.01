#ifndef STACK2_H
#define STACK2_H

#include <iostream>

class Stack {
private:
    char* data;
    int size;
    int top;
    const int INITIAL_CAPACITY = 10;
public:
    Stack(int size = 10); 
    ~Stack();
    void push(char c);
    char pop();
    int count() const;
    bool isEmpty() const;
    bool isFull() const;
    void resize();
    void clear();
    char peek() const;
};

#endif