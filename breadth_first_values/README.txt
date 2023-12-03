Write a function, breadthFirstValues, that takes in a pointer to the root of a binary tree. The function should return a vector containing all values of the tree in breadth-first order.

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

breadthFirstValues(&a);
//    -> ["a", "b", "c", "d", "e", "f"]

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

breadthFirstValues(&a);
//   -> ["a", "b", "c", "d", "e", "f", "g", "h"]

test_02

Node a("a");

//      a

breadthFirstValues(&a);
//    -> ["a"]

test_03

Node a("a");
Node b("b");
Node c("c");
Node d("d");
Node e("e");
Node x("x");

a.right = &b;
b.left = &c;
c.left = &x;
c.right = &d;
d.right = &e;

//      a
//       \
//        b
//       /
//      c
//    /  \
//   x    d
//         \
//          e

breadthFirstValues(&a);
//    -> ["a", "b", "c", "x", "d", "e"]

test_04

breadthFirstValues(nullptr);
//    -> []