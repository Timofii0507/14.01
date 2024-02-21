#include "stack.h"

Stack::Stack(int size) {
    this->size = size;
    data = new char[size];
    top = -1;
}

Stack::~Stack() {
    delete[] data;
}

void Stack::push(char c) {
    if (isFull()) {
        std::cout << "Стек повний, не можна додати символ\n";
    }
    else {
        top++;
        data[top] = c;
    }
}

char Stack::pop() {
    if (isEmpty()) {
        std::cout << "Стек порожній, не можна видалити символ\n";
        return '\0';
    }
    else {
        char c = data[top];
        top--;
        return c;
    }
}

int Stack::count() {
    return top + 1;
}

bool Stack::isEmpty() {
    return top == -1;
}

bool Stack::isFull() {
    return top == size - 1;
}

void Stack::clear() {
    top = -1;
}

char Stack::peek() {
    if (isEmpty()) {
        std::cout << "Стек порожній, не можна отримати верхній символ\n";
        return '\0';
    }
    else {
        return data[top];
    }
}
