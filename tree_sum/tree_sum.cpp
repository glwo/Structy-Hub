#include <stack>
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
int treeSum(Node* root) {
  // todo
  int sum = 0;
  std::stack<Node*> stack;
  if(root != nullptr){
    stack.push(root);
  }
  while(stack.size() > 0){
    Node* curr = stack.top();
    stack.pop();
    sum += curr->val;
    if(curr->right != nullptr) stack.push(curr->right);
    if(curr->left != nullptr) stack.push(curr->left);
  }
  return sum;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}