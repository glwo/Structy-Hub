Write a function, depthFirstValues, that takes in a pointer to the root of a binary tree. The function should return a vector containing all values of the tree in depth-first order.

Hey. This is our first binary tree problem, so be extra sure to check out the approach video! -AZ

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

depthFirstValues(&a); 
//    -> ["a", "b", "d", "e", "c", "f"]

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

depthFirstValues(&a); 
//    -> ["a", "b", "d", "e", "g", "c", "f"]

test_02

Node a("a");
//      a
depthFirstValues(&a); 
//    -> ["a"]

test_03

Node a("a");
Node b("b");
Node c("c");
Node d("d");
Node e("e");

a.right = &b;
b.left = &c;
c.right = &d;
d.right = &e;

//      a
//       \
//        b
//       /
//      c
//       \
//        d
//         \
//          e

depthFirstValues(&a); 
//    -> ["a", "b", "c", "d", "e"]

test_04

depthFirstValues(nullptr); 
//    -> []