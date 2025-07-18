#ifndef QUEUE_H
#define QUEUE_H

class Queue {
private:
    int* arr;
    int front;
    int rear;
    int capacity;

public:
    Queue(int size);        
    ~Queue();                  

    bool isFull() const;
    bool isEmpty() const;
    void enqueue(int value);
    int dequeue();
    int peek() const;
    void display() const;
};

#endif
