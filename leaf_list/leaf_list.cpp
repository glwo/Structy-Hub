
#include <vector>
#include <string>
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
#include <stack>
​
std::vector<std::string> leafList(Node* root) {
  // todo
  std::vector<std::string> leaves;
  std::stack<Node*> stack;
  
  if(root != nullptr){
    stack.push(root);
  }
  
  while(stack.size() > 0){
    Node* curr = stack.top();
    stack.pop();
    
    if(curr->right == nullptr && curr->left == nullptr){
      leaves.push_back(curr->val);
    }
    
    if(curr->right != nullptr) stack.push(curr->right);
    if(curr->left != nullptr) stack.push(curr->left);
  }
  return leaves;
}
​
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}