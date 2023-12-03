Write a function, treeIncludes, that takes in a pointer to the root of a binary tree and a target value. The function should return a boolean indicating whether or not the value is contained in the tree.

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

treeIncludes(&a, "e"); // -> 1 (true)

test_01

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

treeIncludes(&a, "a"); // -> 1 (true)

test_02

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

treeIncludes(&a, "n"); // -> 0 (false)

test_03

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

treeIncludes(&a, "f"); // -> 1 (true)

test_04

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

treeIncludes(&a, "p"); // -> 0 (false)

test_05

treeIncludes(nullptr, "b"); // -> 0 (false)