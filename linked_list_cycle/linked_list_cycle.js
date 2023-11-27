// class Node {
//   constructor(val) {
//     this.val = val;
//     this.next = null;
//   }
// }
​
const linkedListCycle = (head) => {
  // todo
  if(head === null) return false;
  let slow = head;
  let fast = head.next;
  
  while(slow.next !== null && fast.next !== null){
    if(slow.val === fast.val){
      return true
    }
    slow = slow.next;
    fast = fast.next.next;
  }
  return false;
};
​
module.exports = {
  linkedListCycle,
};
​