const nestingScore = (str) => {
  // todo
  let stack = [0];
  
  for(let c of str){
    if(c === "[") {
      stack.push(0);
    } else {
      let num = stack.pop();
      if(num === 0){
        stack[stack.length - 1] += 1;
      } else{
        stack[stack.length - 1] += num * 2;
      }
    }
  }
  return stack.at(-1);
};
​
module.exports = {
  nestingScore,
};
​