Write a function, pathFinder, that takes in a pointer to the root of a binary tree and a target value. The function should return a pointer to a vector representing a path to the target value.

Be sure to dynamically allocate the vector with new.

If the target value is not present in the tree, then return nullptr;

You may assume that the tree contains unique values.

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

pathFinder(&a, "e"); // -> [ "a", "b", "e" ]

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

pathFinder(&a, "p"); // -> null

test_02

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

pathFinder(&a, "c"); // -> ["a", "c"]

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

pathFinder(&a, "h"); // -> ["a", "c", "f", "h"]

test_04

Node x("x");

//      x

pathFinder(&x, "x"); // -> ["x"]

test_05

pathFinder(nullptr, "x"); // -> null

test_06

Node* root = new Node("0");
Node* curr = root;
for (int i = 1; i <= 6000; i += 1) {
  curr->right = new Node(std::to_string(i));
  curr = curr->right;
}

//      0
//       \
//        1
//         \
//          2
//           \
//            3
//             .
//              .
//               .
//              5999
//                \
//                6000

pathFinder(root, "3451"); // -> [0, 1, 2, 3, ..., 3450, 3451]