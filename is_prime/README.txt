Write a function, isPrime, that takes in a number as an argument. The function should return a boolean indicating whether or not the given number is prime.

A prime number is a number that is only divisible by two distinct numbers: 1 and itself.

For example, 7 is a prime because it is only divisible by 1 and 7. For example, 6 is not a prime because it is divisible by 1, 2, 3, and 6.

You can assume that the input number is a positive integer.

test_00

isPrime(2); // -> 1 (true)

test_01

isPrime(3); // -> 1 (true)

test_02

isPrime(4); // -> 0 (false)

test_03

isPrime(5); // -> 1 (true)

test_04

isPrime(6); // -> 0 (false)

test_05

isPrime(7); // -> 1 (true)

test_06

isPrime(8); // -> 0 (false)

test_07

isPrime(25); // -> 0 (false)

test_08

isPrime(31); // -> 1 (true)

test_09

isPrime(2017); // -> 1 (true)

test_10

isPrime(2048); // -> 0 (false)

test_11

isPrime(1); // -> 0 (false)

test_12

isPrime(713); // -> 0 (false)