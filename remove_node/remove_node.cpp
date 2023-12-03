#include <string>
​
class Node {
  public:
    std::string val;
    Node* next;
​
    Node(std::string initialVal) {
      val = initialVal;
      next = nullptr;
    }
};
​
​
​
Node* removeNode(Node* head, std::string targetVal) {
  // todo
  Node* curr = head;
  Node* prev = nullptr;
  if(head->val == targetVal){
    return head->next;
  }
  
  while(curr != nullptr){
    if(curr->val == targetVal){
      prev->next = curr->next;
      break;
    }
    prev = curr;
    curr = curr->next;
  }
  
  return head;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}