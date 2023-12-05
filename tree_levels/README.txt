Write a function, treeLevels, that takes in a pointer to the root of a binary tree. The function should return a 2-Dimensional vector where each subvector represents a level of the tree.

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

treeLevels(&a); // ->
// [
//   ["a"],
//   ["b", "c"],
//   ["d", "e", "f"]
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

treeLevels(&a); // ->
// [
//   ["a"],
//   ["b", "c"],
//   ["d", "e", "f"],
//   ["g", "h", "i"]
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

treeLevels(&q); //->
// [
//   ["q"],
//   ["r", "s"],
//   ["t"],
//   ["u"],
//   ["v"]
// ]

test_03

treeLevels(nullptr); // -> []