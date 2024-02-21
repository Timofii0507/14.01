#include "stack2.h"

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
        resize();
    }
    top++;
    data[top] = c;
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

int Stack::count() const {
    return top + 1;
}

bool Stack::isEmpty() const {
    return top == -1;
}

bool Stack::isFull() const {
    return top == size - 1;
}

void Stack::resize() {
    int newCapacity = size * 2;
    char* newData = new char[newCapacity];
    for (int i = 0; i < size; ++i) {
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
    size = newCapacity;
}

void Stack::clear() {
    top = -1;
}

char Stack::peek() const {
    if (isEmpty()) {
        std::cout << "Стек порожній, не можна отримати верхній символ\n";
        return '\0';
    }
    else {
        return data[top];
    }
}
