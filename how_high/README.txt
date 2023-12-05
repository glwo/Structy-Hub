Write a function, howHigh, that takes in a pointer to the root of a binary tree. The function should return a number representing the height of the tree.

The height of a binary tree is defined as the maximal number of edges from the root node to any leaf node.

If the tree is empty, return -1.

test_00

Node a("a");
Node b("b");
Node c("c");
Node d("d");
Node e("e");
Node f("f");

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;

//      a
//    /   \
//   b     c
//  / \     \
// d   e     f

howHigh(&a); // -> 2

test_01

Node a("a");
Node b("b");
Node c("c");
Node d("d");
Node e("e");
Node f("f");
Node g("g");

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;
e.left = &g;

//      a
//    /   \
//   b     c
//  / \     \
// d   e     f
//    /
//   g

howHigh(&a); // -> 3

test_02

Node a("a");
Node c("c");

a.right = &c;

//      a
//       \
//        c

howHigh(&a); // -> 1

test_03

Node a("a");

//      a

howHigh(&a); // -> 0

test_04

howHigh(nullptr); // -> -1