#include <vector>
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
std::vector<std::string> linkedListValues(Node* head) {
  // todo
  std::vector<std::string> values;
  while(head != nullptr){
    values.push_back(head->val);
    head = head->next;
  }
  return values;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}