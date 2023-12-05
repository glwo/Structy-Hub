Write a function, allTreePaths, that takes in a pointer to the root of a binary tree. The function should return a 2-Dimensional vector where each subvector represents a root-to-leaf path in the tree.

The order within an individual path must start at the root and end at the leaf, but the relative order among paths in the outer vector does not matter.

You may assume that the input tree is non-empty.

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

allTreePaths(&a); // ->
// [
//   [ "a", "b", "d" ],
//   [ "a", "b", "e" ],
//   [ "a", "c", "f" ]
// ]

test_01

Node a("a");
Node b("b");
Node c("c");
Node d("d");
Node e("e");
Node f("f");
Node g("g");
Node h("h");
Node i("i");

a.left = &b;
a.right = &c;
b.left = &d;
b.right = &e;
c.right = &f;
e.left = &g;
e.right = &h;
f.left = &i;

//         a
//      /    \
//     b      c
//   /  \      \
//  d    e      f
//      / \    /
//     g  h   i

allTreePaths(&a); // ->
// [
//   [ "a", "b", "d" ],
//   [ "a", "b", "e", "g" ],
//   [ "a", "b", "e", "h" ],
//   [ "a", "c", "f", "i" ]
// ]

test_02

Node q("q");
Node r("r");
Node s("s");
Node t("t");
Node u("u");
Node v("v");

q.left = &r;
q.right = &s;
r.right = &t;
t.left = &u;
u.right = &v;

//      q
//    /   \
//   r     s
//    \
//     t
//    /
//   u
//  /
// v

allTreePaths(&q); // ->
// [
//   [ "q", "r", "t", "u", "v" ],
//   [ "q", "s" ]
// ]

test_03

Node z("z");

//      z

allTreePaths(&z)) // ->
// [
//   ["z"]
// ]