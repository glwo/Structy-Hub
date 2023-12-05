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
​
​
int howHigh(Node* root) {
  // todo
  if(root == nullptr){
    return -1;
  }
  return 1 + std::max(howHigh(root->right), howHigh(root->left));
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}