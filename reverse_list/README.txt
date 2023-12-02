Write a function, reverseList, that takes in a pointer to the head of a linked list as an argument. The function should reverse the order of the nodes in the linked list in-place and return the new head of the reversed linked list.

test_00

Node a("a");
Node b("b");
Node c("c");
Node d("d");
Node e("e");
Node f("f");

a.next = &b;
b.next = &c;
c.next = &d;
d.next = &e;
e.next = &f;

// a -> b -> c -> d -> e -> f

reverseList(&a); // f -> e -> d -> c -> b -> a

test_01

Node x("x");
Node y("y");

x.next = &y;

// x -> y

reverseList(&x); // y -> x

test_02

Node p("p");

// p

reverseList(&p); // p