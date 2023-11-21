const fib = (n, memo = {}) => {
  // todo
  if(memo[n]) return memo[n];
  if(n === 0) return 0;
  if(n === 1) return 1;
​
  memo[n] = fib(n-1, memo) + fib(n - 2, memo);
  return memo[n];
};
​
module.exports = {
  fib,
};
​