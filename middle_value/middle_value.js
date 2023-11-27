// class Node {
//   constructor(val) {
//     this.val = val;
//     this.next = null;
//   }
// }
​
const middleValue = (head) => {
  // todo
  let str = "";
  while(head !== null){
    str += head.val;
    head = head.next;
  }
  let middle = Math.floor(str.length / 2)
  return str[middle];
};
​
module.exports = {
  middleValue,
};
​