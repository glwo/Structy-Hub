Write a function, treeSum, that takes in a pointer to the root of a binary tree that contains number values. The function should return the total sum of all values in the tree.

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

treeSum(&a); // -> 21

test_01

Node a(1);
Node b(6);
Node c(0);
Node d(3);
Node e(-6);
Node f(2);
Node g(2);
Node h(2);

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;
e.left = &g;
f.right = &h;

//      1
//    /   \
//   6     0
//  / \     \
// 3   -6    2
//    /       \
//   2         2

treeSum(&a); // -> 10

test_02

treeSum(nullptr); // -> 0