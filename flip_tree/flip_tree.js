// class Node {
//   constructor(val) {
//     this.val = val;
//     this.left = null;
//     this.right = null;
//   }
// }
​
const flipTree = (root) => {
  // todo
  if(root === null) return null;
  
  let temp = root.right || null;
  root.right = flipTree(root.left);
  root.left = flipTree(temp);
  return root;
};
​
module.exports = {
  flipTree,
};
​