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
std::string getNodeValue(Node* head, int idx) {
  // todo
  int count = 0;
  while(head != nullptr){
    if(count == idx){
      return head->val;
    }
    count++;
    head = head->next;
  }
  return "";
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}