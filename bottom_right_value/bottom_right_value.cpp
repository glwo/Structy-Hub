#include <string>
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
#include <queue>
​
​
std::string bottomRightValue(Node* root) {
  // todo
  std::queue<Node*> queue;
  std::string last = "";
  
  if(root != nullptr){
    queue.push(root);
  }
  
  while(queue.size() > 0){
    Node* curr = queue.front();
    queue.pop();
    last = curr->val;
    
    if(curr->left != nullptr) queue.push(curr->left);
    if(curr->right != nullptr) queue.push(curr->right);
  }
  return last;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}