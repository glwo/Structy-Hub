Write a function, maxPathSum, that takes in a pointer to the root of a binary tree that contains number values. The function should return the maximum sum of any root to leaf path within the tree.

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

maxPathSum(&a); // -> 18

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

maxPathSum(&a); // -> 59

test_02

Node a(-1);
Node b(-6);
Node c(-5);
Node d(-3);
Node e(0);
Node f(-13);
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
// -3   0    -13
//     /       \
//    -1       -2

maxPathSum(&a); // -> -8

test_03

Node a(42);

//        42

maxPathSum(&a); // -> 42