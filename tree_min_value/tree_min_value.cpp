#include <stack>
#include <limits>
​
class Node {
  public:
    int val;
    Node* left;
    Node* right;
​
​
    Node(int initialVal) {
      val = initialVal;
      left = nullptr;
      right = nullptr;
    }
};
​
​
​
int treeMinValue(Node* root) {
  // todo
  std::stack<Node*> stack;
  int min = std::numeric_limits<int>::max();
  
  if(root != nullptr){
    stack.push(root);
  }
  
  while(stack.size() > 0){
    Node* curr = stack.top();
    stack.pop();
    if(curr->val < min){
      min = curr->val;
    }
    
    if(curr->right) stack.push(curr->right);
    if(curr->left) stack.push(curr->left);
  }
  
  return min;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}