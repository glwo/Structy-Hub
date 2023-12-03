#include <string>
#include <stack>
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
bool treeIncludes(Node* root, std::string targetVal) {
  // todo
  std::stack<Node*> stack;
  
  if(root != nullptr){
    stack.push(root);
  }
  
  while(stack.size() > 0){
    Node* curr = stack.top();
    stack.pop();
    if(curr->val == targetVal){
      return 1;
    }
    
    if(curr->right != nullptr) stack.push(curr->right);
    if(curr->left != nullptr) stack.push(curr->left);
  }
  
  return 0;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}