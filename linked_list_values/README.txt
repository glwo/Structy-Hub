Write a function, linkedListValues, that takes in a pointer to the head of a linked list as an argument. The function should return an array containing all values of the nodes in the linked list.

Hey. This is our first linked list problem, so you should be liberal with watching the Approach and Walkthrough. Be productive! -AZ

test_00

Node a("a");
Node b("b");
Node c("c");
Node d("d");

a.next = &b;
b.next = &c;
c.next = &d;

// a -> b -> c -> d

linkedListValues(&a); // -> [ "a", "b", "c", "d" ]

test_01

Node x("x");
Node y("y");

x.next = &y;

// x -> y

linkedListValues(&x); // -> [ "x", "y" ]

test_02

Node q("q");

// q

linkedListValues(&q); // -> [ "q" ]

test_03

linkedListValues(nullptr); // -> [ ]