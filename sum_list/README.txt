Write a function, sumList, that takes in a pointer to the head of a linked list containing numbers as an argument. The function should return the total sum of all values in the linked list.

test_00

Node a(2);
Node b(8);
Node c(3);
Node d(-1);
Node e(7);

a.next = &b;
b.next = &c;
c.next = &d;
d.next = &e;

// 2 -> 8 -> 3 -> -1 -> 7

sumList(&a); // 19

test_01

Node x(38);
Node y(4);

x.next = &y;

// 38 -> 4

sumList(&x); // 42

test_02

Node z(100);

// 100

sumList(&z); // 100

test_03

sumList(nullptr); // 0