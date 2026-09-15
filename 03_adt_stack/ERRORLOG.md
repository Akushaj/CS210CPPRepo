## 2026-09-14 ( 5: 30 pm )
Tried running the program for the first time after only changing the Stack.h to match the assignments required interface
( added isFull() , changed pop () to return int , renamed top() to peek() ), Stack.cpp and main.cpp were still the old file 
so it didn't match anymore.

Exact Error :

/Users/ashkash/Desktop/Cs210(SDSU)/CS210CPPRepo/03_adt_stack/Stack.cpp:15:13: error: return type of out-of-line definition of 'Stack::pop' differs from that in the declaration
15 | void Stack::pop() {
| ~~~~        ^

/Users/ashkash/Desktop/Cs210(SDSU)/CS210CPPRepo/03_adt_stack/Stack.h:20:9: note: previous declaration is here
20 |     int pop();              // remove the top (does nothing if empty)
|     ~~~ ^

/Users/ashkash/Desktop/Cs210(SDSU)/CS210CPPRepo/03_adt_stack/Stack.cpp:19:12: error: out-of-line definition of 'top' does not match any declaration in 'Stack'
19 | int Stack::top() const {
|            ^~~

/Users/ashkash/Desktop/Cs210(SDSU)/CS210CPPRepo/03_adt_stack/Stack.h:16:7: note: Stack defined here
16 | class Stack {
|       ^~~~~

/Users/ashkash/Desktop/Cs210(SDSU)/CS210CPPRepo/03_adt_stack/main.cpp:18:31: error: no member named 'top' in 'Stack'
18 |     std::cout << "Top: " << s.top() << std::endl;
|                             ~ ^

/Users/ashkash/Desktop/Cs210(SDSU)/CS210CPPRepo/03_adt_stack/main.cpp:21:42: error: no member named 'top' in 'Stack'
21 |     std::cout << "After pop, top: " << s.top() << std::endl;
|                                        ~ ^

Cause  : Stack.h declares int pop() and peek(), but Stack.cpp still defined them as void pop() and top() from the older version 
and main.cpp still called s.top(). Header and implementation was different.

FIx : Rewriting Stack.cpp so that every implementation matches Stack.h exactly ( pop returns int , peek instead of top ). Updated Main.cpp to call s.peek() instead of s.top().
