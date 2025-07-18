#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue(int size) {
    capacity = size;
    arr = new int[capacity];
    front = 0;
    rear = -1;
}

Queue::~Queue() {
    delete[] arr;
}

bool Queue::isFull() const {
    return rear == capacity - 1;
}

bool Queue::isEmpty() const {
    return front > rear;
}

void Queue::enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full.\n";
        return;
    }
    arr[++rear] = value;
}

int Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return -1;
    }
    return arr[front++];
}

int Queue::peek() const {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return -1;
    }
    return arr[front];
}

void Queue::display() const {
    if (isEmpty()) {
        cout << "Queue is empty.\n";
        return;
    }
    for (int i = front; i <= rear; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// main.cpp
#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue contents: ";
    q.display();

    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Front element: " << q.peek() << endl;

    cout << "Queue after dequeue: ";
    q.display();

    return 0;
}
