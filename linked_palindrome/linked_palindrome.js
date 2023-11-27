// class Node {
//   constructor(val) {
//     this.val = val;
//     this.next = null;
//   }
// }
​
const linkedPalindrome = (head) => {
  // todo
  let str = "";
  
  while(head !== null){
    str += head.val;
    head = head.next
  }
  return str === str.split("").reverse().join("");
};
​
module.exports = {
  linkedPalindrome,
};
​