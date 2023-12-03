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
Node* insertNode(Node* head, std::string value, int idx) {
  // todo
  int count = 0;
  Node* curr = head;
  
  if(idx == 0){
    Node* newNode = new Node(value);
    newNode->next = head;
    return newNode;
  }
  
  while(curr != nullptr){
    if(count + 1 == idx){
      Node* newNode = new Node(value);
      Node* temp = curr->next;
      curr->next = newNode;
      newNode->next = temp;
    }
    count++;
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