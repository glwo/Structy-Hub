// class Node {
//   constructor(val) {
//     this.val = val;
//     this.left = null;
//     this.right = null;
//   }
// }
​
const binarySearchTreeIncludes = (root, target) => {
  // todo
  let stack = [root];
  
  while(stack.length > 0){
    let curr = stack.pop();
    if(curr.val === target){
      return true;
    }
    if(curr.right) stack.push(curr.right);
    if(curr.left) stack.push(curr.left);
  }
  return false;
};
​
module.exports = {
  binarySearchTreeIncludes,
};
​