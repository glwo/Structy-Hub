Write a function, treeValueCount, that takes in a pointer to the root of a binary tree and a target value. The function should return the number of times that the target occurs in the tree.

test_00

Node a(12);
Node b(6);
Node c(6);
Node d(4);
Node e(6);
Node f(12);

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;

//      12
//    /   \
//   6     6
//  / \     \
// 4   6     12

treeValueCount(&a,  6); // -> 3

test_01

Node a(12);
Node b(6);
Node c(6);
Node d(4);
Node e(6);
Node f(12);

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;

//      12
//    /   \
//   6     6
//  / \     \
// 4  6     12

treeValueCount(&a,  12); // -> 2

test_02

Node a(7);
Node b(5);
Node c(1);
Node d(1);
Node e(8);
Node f(7);
Node g(1);
Node h(1);

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;
e.left = &g;
f.right = &h;

//      7
//    /   \
//   5     1
//  / \     \
// 1   8     7
//    /       \
//   1         1
treeValueCount(&a, 1); // -> 4

test_03

Node a(7);
Node b(5);
Node c(1);
Node d(1);
Node e(8);
Node f(7);
Node g(1);
Node h(1);

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;
e.left = &g;
f.right = &h;

//      7
//    /   \
//   5     1
//  / \     \
// 1   8     7
//    /       \
//   1         1

treeValueCount(&a, 9); // -> 0

test_04

treeValueCount(nullptr, 42); // -> 0