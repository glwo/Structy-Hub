// class Node {
//   constructor(val) {
//     this.val = val;
//     this.left = null;
//     this.right = null;
//   }
// }
​
const lowestCommonAncestor = (root, val1, val2) => {
  // todo
  const path1 = getPath(root, val1);
  const path2 = getPath(root, val2);
  const set2 = new Set(path2);
  for(let val of path1){
    if(set2.has(val)) return val;
  }
  
};
​
const getPath = (root, targetVal) => {
  if(root === null) return null;
  
  if(root.val === targetVal) return [ root.val ];
  
  const leftPath = getPath(root.left, targetVal);
  if(leftPath !== null){
    leftPath.push(root.val);
    return leftPath
  }
  
  const rightPath = getPath(root.right, targetVal);
  if(rightPath !== null){
    rightPath.push(root.val);
    return rightPath
  }
  
  return null;
}
​
module.exports = {
  lowestCommonAncestor,
};
​