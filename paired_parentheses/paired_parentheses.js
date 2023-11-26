const pairedParentheses = (str) => {
  // todo
  let count = 0;
  
  for(let c of str){
    if(c === "("){
      count++;
    } else if (c === ")"){
      if(count === 0){
        return false;
      }
      count--;
    }
  }
  return count === 0;
};
​
module.exports = {
  pairedParentheses,
};
​