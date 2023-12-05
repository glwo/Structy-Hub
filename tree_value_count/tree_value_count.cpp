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
#include <stack>
​
int treeValueCount(Node* root, int targetVal) {
  // todo
  std::stack<Node*> stack;
  if(root != nullptr){
    stack.push(root);
  }
  int count = 0;
  
  while(stack.size() > 0){
    Node* curr = stack.top();
    stack.pop();
    if(curr->val == targetVal) count++;
    
    if(curr->right != nullptr) stack.push(curr->right);
    if(curr->left != nullptr) stack.push(curr->left);
  }
  
  return count;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}