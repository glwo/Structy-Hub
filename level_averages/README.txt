Write a function, levelAverages, that takes in a pointer to the root of a binary tree that contains number values. The function should return a vector containing the average value of each level.

test_00

Node a(3);
Node b(11);
Node c(4);
Node d(4);
Node e(-2);
Node f(1);

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;

//       3
//    /    \
//   11     4
//  / \      \
// 4   -2     1

levelAverages(&a); // -> [ 3, 7.5, 1 ]

test_01

Node a(5);
Node b(11);
Node c(54);
Node d(20);
Node e(15);
Node f(1);
Node g(3);

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
e.left = &f;
e.right = &g;

//        5
//     /    \
//    11    54
//  /   \
// 20   15
//      / \
//     1  3

levelAverages(&a); // -> [ 5, 32.5, 17.5, 2 ]

test_02

Node a(-1);
Node b(-6);
Node c(-5);
Node d(-3);
Node e(0);
Node f(45);
Node g(-1);
Node h(-2);

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;
e.left = &g;
f.right = &h;

//        -1
//      /   \
//    -6    -5
//   /  \     \
// -3   0     45
//     /       \
//    -1       -2

levelAverages(&a); // -> [ -1, -5.5, 14, -1.5 ]

test_03

Node q(13);
Node r(4);
Node s(2);
Node t(9);
Node u(2);
Node v(42);

q.left = &r;
q.right = &s;
r.right = &t;
t.left = &u;
u.right = &v;

//        13
//      /   \
//     4     2
//      \
//       9
//      /
//     2
//    /
//   42

levelAverages(&q); // -> [ 13, 3, 9, 2, 42 ]

test_04

levelAverages(nullptr); // -> [ ]