Write a function, leafList, that takes in a pointer to the root of a binary tree and returns a vector containing the values of all leaf nodes in left-to-right order.

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

leafList(&a); // -> [ "d", "e", "f" ]

test_01

Node a("a");
Node b("b");
Node c("c");
Node d("d");
Node e("e");
Node f("f");
Node g("g");
Node h("h");

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;
e.left = &g;
f.right = &h;

//      a
//    /   \
//   b     c
//  / \     \
// d   e     f
//    /       \
//   g         h

leafList(&a); // -> [ "d", "g", "h" ]

test_02

Node a("5");
Node b("11");
Node c("54");
Node d("20");
Node e("15");
Node f("1");
Node g("3");

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

leafList(&a); // -> [ "20", "1", "3", "54" ]

test_03

Node x("x");

//      x

leafList(&x); // -> [ "x" ]

test_04

leafList(nullptr); // -> [ ]