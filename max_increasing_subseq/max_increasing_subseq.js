const maxIncreasingSubseq = (numbers, i = 0, previous = -Infinity, memo = {}) => {
  // todo
  const key = i + "," + previous;
  if(key in memo) return memo[key];
  if(i === numbers.length) return 0;
  
  const current = numbers[i];
  const options = [];
  const dontTakeCurrent = maxIncreasingSubseq(numbers, i + 1, previous, memo);
  options.push(dontTakeCurrent);
  
  if(current > previous){
    const takeCurrent = 1 + maxIncreasingSubseq(numbers, i + 1, current, memo);
    options.push(takeCurrent);
  }
  
  memo[key] = Math.max(...options)
  return memo[key];
};
​
module.exports = {
  maxIncreasingSubseq,
};
​