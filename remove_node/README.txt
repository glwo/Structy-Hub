Write a function, removeNode, that takes in a pointer to the head of a linked list and a target value as arguments. The function should delete the node containing the target value from the linked list and return the head of the resulting linked list. If the target appears multiple times in the linked list, only remove the first instance of the target in the list.

Do this in-place. You do not need to dynamically deallocate the memory with delete, just reassign next pointers correctly.

You may assume that the input list is non-empty.

You may assume that the input list contains the target.

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

removeNode(&a, "c");
// a -> b -> d -> e -> f

test_01

Node x("x");
Node y("y");
Node z("z");

x.next = &y;
y.next = &z;

// x -> y -> z

removeNode(&x, "z");
// x -> y

test_02

Node q("q");
Node r("r");
Node s("s");

q.next = &r;
r.next = &s;

// q -> r -> s

removeNode(&q, "q");
// r -> s

test_03

Node node1("h");
Node node2("i");
Node node3("j");
Node node4("i");

node1.next = &node2;
node2.next = &node3;
node3.next = &node4;

// h -> i -> j -> i

removeNode(&node1, "i");
// h -> j -> i

test_04

Node node1("t");

// t

removeNode(&t, "t");
// nullptr