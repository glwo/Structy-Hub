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
Node* zipperLists(Node* head1, Node* head2) {
  // todo
  Node* head = head1;
  int count = 1;
  Node* tail = head;
  Node* curr1 = head1->next;
  Node* curr2 = head2;
  
  while(curr1 != nullptr && curr2 != nullptr){
    if(count % 2 == 0){
      tail->next = curr1;
      curr1 = curr1->next;
    } else{
      tail->next = curr2;
      curr2 = curr2->next;
    }
    tail = tail->next;
    count++;
  }
  if(curr1 != nullptr){
    tail->next = curr1;
  }
  
  if(curr2 != nullptr){
    tail->next = curr2;
  }
  
  return head;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}