Write a function, createLinkedList, that takes in a vector of values as an argument. The function should create a linked list containing each element of the vector as the values of the nodes. The function should return the head of the linked list.

Be sure to dynamically allocate the new nodes in memory using new.

test_00

std::vector<std::string> values { "h", "e", "y" };
createLinkedList(values);
// h -> e -> y

test_01

std::vector<std::string> values { "1", "7", "1", "8" };
createLinkedList(values);
// 1 -> 7 -> 1 -> 8

test_02

std::vector<std::string> values { "a" };
createLinkedList(["a"]);
// a

test_03

std::vector<std::string> values;
createLinkedList(values);
// nullptr