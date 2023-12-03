#include <string>
#include <vector>
​
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
Node* createLinkedList(std::vector<std::string> values) {
  // todo
  Node* head = new Node("0");
  Node* newHead = head;
  for(auto& val : values){
    Node* newNode = new Node(val);
    head->next = newNode;
    head = head->next;
  }
  return newHead->next;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}