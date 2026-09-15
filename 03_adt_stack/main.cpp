// TASK 03 -- Using the Stack ADT
//
// Read this file without ever opening Stack.cpp. You should still be
// able to tell exactly what this program does. That's the ADT promise
// in action: the header alone is enough documentation to use the type.

#include <iostream>
#include "Stack.h"

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(100);

    std::cout << "Stack size: " << s.size() << std::endl;
    std::cout << "Top: " << s.peek() << std::endl;

    s.pop();
    std::cout << "After pop, top: " << s.peek() << std::endl;
    s.pop();
    std::cout << "After pop, top: " << s.peek() << std::endl;

    std::cout << "Stock size: " << s.size() << std::endl;

    std::cout << "Is empty? " << (s.isEmpty() ? "yes" : "no") << std::endl;

    for (int i = 0 ; i < 97 ; i++) { // 97 more pushes so 3 + 97 = 100 completely full
        s.push(i);
    }
    s.push(100); // one more push past 100 so , it should print the stack is full
    std::cout << "Stack size: " << s.size() << std::endl;

    for (int i = 0 ; i < 100 ; i++) { // pop all 100
        s.pop();
    }
    s.pop(); // one more pop past 0 , it should print the stack is empty 
    std::cout << "Stack size: " << s.size() << std::endl;

    return 0;
}

// TRY IT LIVE: ask the class "what data structure is UNDER this stack?"
// Nobody can answer just from reading this file, and that's correct --
// it's not their business. Then open Stack.h to reveal it's a vector.
