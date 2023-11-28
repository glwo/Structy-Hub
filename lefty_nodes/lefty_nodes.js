// class Node {
//   constructor(val) {
//     this.val = val;
//     this.left = null;
//     this.right = null;
//   }
// }
​
const leftyNodes = (root) => {
  // todo
  if(!root) return [];
  let stack = [[root, 0]];
  let ans = [];
  
  while(stack.length > 0){
    let [curr, depth] = stack.pop();
    if(!ans[depth]){
      ans[depth] = curr.val;
    }
    // ans[depth] = curr.val;
    
    if(curr.right) stack.push([curr.right, depth + 1])
    if(curr.left) stack.push([curr.left, depth + 1]);
  }
  return ans;
};
​
module.exports = {
  leftyNodes,
};
​