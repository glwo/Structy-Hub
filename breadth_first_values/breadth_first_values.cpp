#include <string>
#include <vector>
#include <queue>
​
​
class Node {
  public:
    std::string val;
    Node* left;
    Node* right;
​
​
    Node(std::string initialVal) {
      val = initialVal;
      left = nullptr;
      right = nullptr;
    }
};
​
​
​
std::vector<std::string> breadthFirstValues(Node* root) {
  // todo
  std::vector<std::string> values;
  std::queue<Node*> queue;
  if(root != nullptr){
    queue.push(root);
  }
  while(queue.size() > 0){
    Node* curr = queue.front();
    queue.pop();
    values.push_back(curr->val);
    if(curr->left != nullptr) queue.push(curr->left);
    if(curr->right != nullptr) queue.push(curr->right);
  }
  return values;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}