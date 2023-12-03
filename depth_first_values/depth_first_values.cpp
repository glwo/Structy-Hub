#include <string>
#include <vector>
#include <stack>
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
std::vector<std::string> depthFirstValues(Node* root) {
  // todo
  std::vector<std::string> values;
  std::stack<Node*> stack;
  
  if(root != nullptr){
    stack.push(root);
  }
  
  while(stack.size() > 0){
    Node* curr = stack.top();
    stack.pop();
    
    values.push_back(curr->val);
    
    if(curr->right) stack.push(curr->right);
    if(curr->left) stack.push(curr->left);
  }
  
  return values;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}