Write a function, isUnivalueList, that takes in a pointer to the head of a linked list as an argument. The function should return a boolean indicating whether or not the linked list contains exactly one unique value.

You may assume that the input list is non-empty.

test_00

Node a(7);
Node b(7);
Node c(7);

a.next = &b;
b.next = &c;

// 7 -> 7 -> 7

isUnivalueList(&a); // 1 (true)

test_01

Node a(7);
Node b(7);
Node c(4);

a.next = &b;
b.next = &c;

// 7 -> 7 -> 4

isUnivalueList(&a); // 0 (false)

test_02

Node u(2);
Node v(2);
Node w(2);
Node x(2);
Node y(2);

u.next = &v;
v.next = &w;
w.next = &x;
x.next = &y;

// 2 -> 2 -> 2 -> 2 -> 2

isUnivalueList(&u); // 1 (true)

test_03

Node u(2);
Node v(2);
Node w(3);
Node x(3);
Node y(2);

u.next = &v;
v.next = &w;
w.next = &x;
x.next = &y;

// 2 -> 2 -> 3 -> 3 -> 2

isUnivalueList(&u); // 0 (false)

test_04

Node z(42);

// 42

isUnivalueList(&z); // 1 (true)