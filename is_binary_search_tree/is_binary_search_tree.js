// class Node {
//   constructor(val) {
//     this.val = val;
//     this.left = null;
//     this.right = null;
//   }
// }
​
const isBinarySearchTree = (root) => {
  // todo
  const values = [];
  inOrderTraversal(root,values);
  for(let i = 0; i < values.length - 1; i++){
    if(values[i] > values[i+1]){
      return false;
    }
  }
  return true;
};
​
const inOrderTraversal = (root, values) => {
  if(root === null) return;
  inOrderTraversal(root.left, values);
  values.push(root.val);
  inOrderTraversal(root.right, values)
}
​
module.exports = {
  isBinarySearchTree,
};
​