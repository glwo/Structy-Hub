// class Node {
//   constructor(val) {
//     this.val = val;
//     this.left = null;
//     this.right = null;
//   }
// }
​
const postOrder = (root) => {
  // todo
  const values = [];
  postOrderTrav(root, values);
  return values;
};
​
const postOrderTrav = (root, values) => {
  if(root === null) return;
  postOrderTrav(root.left, values);
  postOrderTrav(root.right, values);
  values.push(root.val);
}
​
​
module.exports = {
  postOrder,
};
​