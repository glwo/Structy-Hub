Write a function, getNodeValue, that takes in a pointer to the head of a linked list and an index. The function should return the value of the linked list at the specified index.

If there is no node at the given index, then return the empty string.

test_00

Node a("a");
Node b("b");
Node c("c");
Node d("d");

a.next = &b;
b.next = &c;
c.next = &d;

// a -> b -> c -> d

getNodeValue(&a, 2); // "c"

test_01

Node a("a");
Node b("b");
Node c("c");
Node d("d");

a.next = &b;
b.next = &c;
c.next = &d;

// a -> b -> c -> d

getNodeValue(&a, 3); // "d"

test_02

Node a("a");
Node b("b");
Node c("c");
Node d("d");

a.next = &b;
b.next = &c;
c.next = &d;

// a -> b -> c -> d

getNodeValue(&a, 7); // ""

test_03

Node node1("banana");
Node node2("mango");

node1.next = &node2;

// banana -> mango

getNodeValue(node1, 0); // "banana"

test_04

Node node1("banana");
Node node2("mango");

node1.next = &node2;

// banana -> mango

getNodeValue(node1, 1); // "mango"