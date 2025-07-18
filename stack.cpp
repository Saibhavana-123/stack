#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack(int size) {
    capacity = size;
    arr = new int[capacity];
    top = -1;
}

Stack::~Stack() {
    delete[] arr;
}

void Stack::push(int value) {
    if (isFull()) {
        cout << "Stack Overflow\n";
        return;
    }
    arr[++top] = value;
}

int Stack::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow\n";
        return -1;
    }
    return arr[top--];
}

int Stack::peek() {
    if (isEmpty()) {
        cout << "Stack is Empty\n";
        return -1;
    }
    return arr[top];
}

bool Stack::isEmpty() const {
    return top == -1;
}

bool Stack::isFull() const {
    return top == capacity - 1;
}

void Stack::display() const {
    if (isEmpty()) {
        cout << "Stack is Empty\n";
        return;
    }
    cout << "Stack elements (top to bottom): ";
    for (int i = top; i >= 0; --i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    Stack myStack(5);  

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    myStack.display();

    cout << "Top element: " << myStack.peek() << "\n";

    cout << "Popped: " << myStack.pop() << "\n";
    myStack.display();

    return 0;
}
