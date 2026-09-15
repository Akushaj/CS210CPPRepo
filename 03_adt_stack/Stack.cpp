// TASK 03 -- The Stack ADT's implementation
//
// This is where "how" lives. We chose std::vector as the backing
// storage: push_back is our push, back() is our top, pop_back() is our
// pop. A student could rewrite this whole file to use a raw fixed-size
// array instead, and as long as push/pop/top/isEmpty/size still behave
// the same way, nothing calling this class would ever notice.

#include "Stack.h"

#include <iostream>

Stack::Stack() {
    topIndex = 0;
}

void Stack::push(int value) {

    if (isFull()) {
        std::cout<< "Stack is Full" << std::endl;
        return;
    }
    data[topIndex] = value;
    topIndex++;
}

int Stack::pop() {
    if (isEmpty()) {
        std::cout<< "Stack is Empty" <<std::endl;
        return -1;
    }
    int value = data[topIndex - 1];
    topIndex--;
    return value;
}

int Stack::peek() const {
    if (isEmpty()) {
        std::cout<< "Stack is Empty" << std::endl;
        return -1;
    }
    return data[topIndex - 1];
    return 0;
}

bool Stack::isEmpty() const {
    return topIndex == 0;
}

bool Stack::isFull() const {
    return topIndex == 100;
}

int Stack::size() const {
    return topIndex;
}
