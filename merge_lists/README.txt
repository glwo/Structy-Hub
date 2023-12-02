Write a function, mergeLists, that takes in pointers to the heads of two sorted linked lists. The function should merge the two lists together into single sorted linked list. The function should return a pointer to the head of the merged linked list.

Do this in-place, by mutating the original Nodes.

You may assume that both input lists are non-empty and contain increasing sorted numbers.

test_00

Node a(5);
Node b(7);
Node c(10);
Node d(12);
Node e(20);
Node f(28);
a.next = &b;
b.next = &c;
c.next = &d;
d.next = &e;
e.next = &f;
// 5 -> 7 -> 10 -> 12 -> 20 -> 28

Node q(6);
Node r(8);
Node s(9);
Node t(25);
q.next = &r;
r.next = &s;
s.next = &t;
// 6 -> 8 -> 9 -> 25

mergeLists(&a, &q);
// 5 -> 6 -> 7 -> 8 -> 9 -> 10 -> 12 -> 20 -> 25 -> 28 

test_01

Node a(5);
Node b(7);
Node c(10);
Node d(12);
Node e(20);
Node f(28);
a.next = &b;
b.next = &c;
c.next = &d;
d.next = &e;
e.next = &f;
// 5 -> 7 -> 10 -> 12 -> 20 -> 28

Node q(1);
Node r(8);
Node s(9);
Node t(10);
q.next = &r;
r.next = &s;
s.next = &t;
// 1 -> 8 -> 9 -> 10

mergeLists(&a, &q);
// 1 -> 5 -> 7 -> 8 -> 9 -> 10 -> 10 -> 12 -> 20 -> 28 

test_02

Node h(30);
// 30

Node p(15);
Node q(67);
p.next = &q;
// 15 -> 67

mergeLists(&h, &p);
// 15 -> 30 -> 67