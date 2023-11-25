const canConcat = (s, words, memo = {}) => {
  // todo
  if(s in memo) return memo[s];
  
  if(s === "") return true;
  
  for(let word of words){
    if(s.startsWith(word)){
      let suffix = s.slice(word.length);
      if(canConcat(suffix, words, memo) === true){
        memo[s] = true;
        return true;
      }
    }
  }
  memo[s] = false;
  return false;
};
​
module.exports = {
  canConcat,
};
​