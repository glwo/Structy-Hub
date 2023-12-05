Write a function, bottomRightValue, that takes in a pointer to the root of a binary tree. The function should return the right-most value in the bottom-most level of the tree.

You may assume that the input tree is non-empty.

test_00

Node a("3");
Node b("11");
Node c("10");
Node d("4");
Node e("-2");
Node f("1");

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;

//       3
//    /    \
//   11     10
//  / \      \
// 4   -2     1

bottomRightValue(&a); // -> "1"

test_01

Node a("-1");
Node b("-6");
Node c("-5");
Node d("-3");
Node e("-4");
Node f("-13");
Node g("-2");
Node h("6");

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;
e.left = &g;
e.right = &h;

//        -1
//      /   \
//    -6    -5
//   /  \     \
// -3   -4   -13
//     / \       
//    -2  6

bottomRightValue(&a); // -> "6"

test_02

Node a("-1");
Node b("-6");
Node c("-5");
Node d("-3");
Node e("-4");
Node f("-13");
Node g("-2");
Node h("6");
Node i("7");

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;
e.left = &g;
e.right = &h;
f.left = &i;

//        -1
//      /   \
//    -6    -5
//   /  \     \
// -3   -4   -13
//     / \    /   
//    -2  6  7 

bottomRightValue(&a); // -> "7"

test_03

Node a("a");
Node b("b");
Node c("c");
Node d("d");
Node e("e");
Node f("f");

a.left = &b;
a.right = &c;
b.right = &d;
d.left = &e;
e.right = &f;

//      a
//    /   \ 
//   b     c
//    \
//     d
//    /
//   e
//   \
//    f
          
bottomRightValue(&a); // -> "f"

test_04

Node a("42");

//      42

bottomRightValue(&a); // -> "42"