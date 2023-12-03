Write a function, addLists, that takes in pointers to the heads of two linked lists, each representing a number. The nodes of the linked lists contain digits as values. The nodes in the input lists are reversed; this means that the least significant digit of the number is the head. The function should return the head of a new linked listed representing the sum of the input lists. The output list should have its digits reversed as well.

You must do this by traversing through the linked lists once.

Say we wanted to compute 621 + 354 normally. The sum is 975:

   621
 + 354
 -----
   975

Then, the reversed linked list format of this problem would appear as:

    1 -> 2 -> 6
 +  4 -> 5 -> 3
 --------------
    5 -> 7 -> 9


Be sure to dynamically allocate the new nodes in memory using new.

test_00

//   621
// + 354
// -----
//   975

Node a1(1);
Node a2(2);
Node a3(6);
a1.next = &a2;
a2.next = &a3;
// 1 -> 2 -> 6

Node b1(4);
Node b2(5);
Node b3(3);
b1.next = &b2;
b2.next = &b3;
// 4 -> 5 -> 3

addLists(&a1, &b1);
// 5 -> 7 -> 9

test_01

//  7541
// +  32
// -----
//  7573

Node a1(1);
Node a2(4);
Node a3(5);
Node a4(7);
a1.next = &a2;
a2.next = &a3;
a3.next = &a4;
// 1 -> 4 -> 5 -> 7

Node b1(2);
Node b2(3);
b1.next = &b2;
// 2 -> 3

addLists(&a1, &b1);
// 3 -> 7 -> 5 -> 7

test_02

//   39
// + 47
// ----
//   86

Node a1(9);
Node a2(3);
a1.next = &a2;
// 9 -> 3

Node b1(7);
Node b2(4);
b1.next = &b2;
// 7 -> 4

addLists(&a1, &b1);
// 6 -> 8

test_03

//   89
// + 47
// ----
//  136

Node a1(9);
Node a2(8);
a1.next = &a2;
// 9 -> 8

Node b1(7);
Node b2(4);
b1.next = &b2;
// 7 -> 4

addLists(&a1, &b1);
// 6 -> 3 -> 1

test_04

//   999
//  +  6
//  ----
//  1005

Node a1(9);
Node a2(9);
Node a3(9);
a1.next = &a2;
a2.next = &a3;
// 9 -> 9 -> 9

Node b1(6);
// 6

addLists(&a1, &b1);
// 5 -> 0 -> 0 -> 1