const befittingBrackets = (str) => {
  // todo
  let closeToOpen = {"}": "{",
                      ")": "(",
                      "]": "["}
  
  let stack = [];
  for(let c of str){
    if (c in closeToOpen){
      if(closeToOpen[c] === stack.at(-1)){
        stack.pop();
      } else{
        return false;
      }
    }
    else {
      stack.push(c);
         }
  }
  return stack.length === 0;
};
​
module.exports = {
  befittingBrackets,
};
​