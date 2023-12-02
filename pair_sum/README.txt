Write a function, pairSum, that takes in a vector of numbers and a target sum as arguments. The function should return a std::array containing a pair of indices whose elements sum to the given target. The indices returned must be unique.

Be sure to return the indices, not the elements themselves.

There is guaranteed to be one such pair that sums to the target.

test_00

std::vector<int> numbers { 3, 2, 5, 4, 1 };
pairSum(numbers, 8); // -> [0, 2]

test_01

std::vector<int> numbers { 4, 7, 9, 2, 5, 1 };
pairSum(numbers, 5); // -> [0, 5]

test_02

std::vector<int> numbers { 4, 7, 9, 2, 5, 1 };
pairSum(numbers, 3); // -> [3, 5]

test_03

std::vector<int> numbers { 1, 6, 7, 2 };
pairSum(numbers, 13); // -> [1, 2]

test_04

std::vector<int> numbers { 9, 9 };
pairSum(numbers, 18); // -> [0, 1]

test_05

std::vector<int> numbers { 6, 4, 2, 8 };
pairSum(numbers, 12); // -> [1, 3]