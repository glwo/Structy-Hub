Write a function, maxValue, that takes in a vector of numbers as an argument. The function should return the largest number in the vector.

Solve this without using any built-in methods.

You can assume that the vector is non-empty.

test_00

std::vector<float> numbers{ 4, 7, 2, 8, 10, 9 };
maxValue(numbers); // -> 10

test_01

std::vector<float> numbers{ 10, 5, 40, 40.3 };
maxValue(numbers); // -> 40.3

test_02

std::vector<float> numbers{ -5, -2, -1, -11 };
maxValue(numbers); // -> -1

test_03

std::vector<float> numbers{ 42 };
maxValue(numbers); // -> 42

test_04

std::vector<float> numbers{ 1000, 8 };
maxValue(numbers); // -> 1000

test_05

std::vector<float> numbers{ 1000, 8, 9000 };
maxValue(numbers); // -> 9000

test_06

std::vector<float> numbers{ 2, 5, 1, 1, 4 };
maxValue(numbers); // -> 5