Write a function, zipperLists, that takes in pointers to the heads of two linked lists. The function should zipper the two lists together into single linked list by alternating nodes. If one of the linked lists is longer than the other, the resulting list should terminate with the remaining nodes. The function should return a pointer to the head of the zippered linked list.

Do this in-place, by mutating the original Nodes.

You may assume that both input lists are non-empty.

test_00

Node a("a");
Node b("b");
Node c("c");
a.next = &b;
b.next = &c;
// a -> b -> c

Node x("x");
Node y("y");
Node z("z");
x.next = &y;
y.next = &z;
// x -> y -> z

zipperLists(&a, &x);
// a -> x -> b -> y -> c -> z

test_01

Node a("a");
Node b("b");
Node c("c");
Node d("d");
Node e("e");
Node f("f");
a.next = &b;
b.next = &c;
c.next = &d;
d.next = &e;
e.next = &f;
// a -> b -> c -> d -> e -> f

Node x("x");
Node y("y");
Node z("z");
x.next = &y;
y.next = &z;
// x -> y -> z

zipperLists(&a, &x);
// a -> x -> b -> y -> c -> z -> d -> e -> f

test_02

Node s("s");
Node t("t");
s.next = &t;
// s -> t

Node one("1");
Node two("2");
Node three("3");
Node four("4");
one.next = &two;
two.next = &three;
three.next = &four;
// 1 -> 2 -> 3 -> 4

zipperLists(&s, &one);
// s -> 1 -> t -> 2 -> 3 -> 4

test_03

Node w("w");
// w

Node one("1");
Node two("2");
Node three("3");
one.next = &two;
two.next = &three;
// 1 -> 2 -> 3

zipperLists(&w, &one);
// w -> 1 -> 2 -> 3

test_04

Node one("1");
Node two("2");
Node three("3");
one.next = &two;
two.next = &three;
// 1 -> 2 -> 3

Node w("w");
// w

zipperLists(&one, &w);
// 1 -> w -> 2 -> 3