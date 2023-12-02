Write a function, pairProduct, that takes in a vector of numbers and a target product as arguments. The function should return a std::array containing a pair of indices whose elements multiply to the given target. The indices returned must be unique.

Be sure to return the indices, not the elements themselves.

There is guaranteed to be one such pair whose product is the target.

test_00

std::vector<int> numbers { 3, 2, 5, 4, 1 };  
pairProduct(numbers, 8); // -> [1, 3]

test_01

std::vector<int> numbers { 3, 2, 5, 4, 1 };  
pairProduct(numbers, 10); // -> [1, 2]

test_02

std::vector<int> numbers { 4, 7, 9, 2, 5, 1 };  
pairProduct(numbers, 5); // -> [4, 5]

test_03

std::vector<int> numbers { 4, 7, 9, 2, 5, 1 };  
pairProduct(numbers, 35); // -> [1, 4]

test_04

std::vector<int> numbers { 3, 2, 5, 4, 1 };
pairProduct(numbers, 10); // -> [1, 2]

test_05

std::vector<int> numbers { 4, 6, 8, 2 };  
pairProduct(numbers, 16); // -> [2, 3]