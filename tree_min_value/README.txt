Write a function, treeMinValue, that takes in a pointer to the root of a binary tree that contains number values. The function should return the minimum value within the tree.

You may assume that the input tree is non-empty.

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

treeMinValue(&a); // -> -2

test_01

Node a(5);
Node b(11);
Node c(3);
Node d(4);
Node e(14);
Node f(12);

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;

//       5
//    /    \
//   11     3
//  / \      \
// 4   14     12

treeMinValue(&a); // -> 3

test_02

Node a(-1);
Node b(-6);
Node c(-5);
Node d(-3);
Node e(-4);
Node f(-13);
Node g(-2);
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
// -3   -4   -13
//     /       \
//    -2       -2

treeMinValue(&a); // -> -13

test_03

Node a(42);

//        42

treeMinValue(&a); // -> 42