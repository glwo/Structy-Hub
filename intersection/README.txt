Write a function, intersection, that takes in two vectors, a,b, as arguments. The function should return a new vector containing elements that are in both of the two vectors.

You may assume that each input vector does not contain duplicate elements.

test_00

std::vector<int> a {4,2,1,6};
std::vector<int> b {3,6,9,2,10};
intersection(a, b) // -> [2,6]

test_01

std::vector<int> a {2,4,6};
std::vector<int> b {4,2};
intersection(a, b) // -> [2,4]

test_02

std::vector<int> a {4,2,1};
std::vector<int> b {1,2,4,6};
intersection(a, b) // -> [1,2,4]

test_03

std::vector<int> a {0,1,2};
std::vector<int> b {10,11};
intersection(a, b) // -> []

test_04

std::vector<int> a;
std::vector<int> b;
for (int i = 0; i < 32000; i += 1) {
  a.push_back(i);
  b.push_back(i);
}
intersection(a, b) // -> [0,1,2,3,..., 31999]