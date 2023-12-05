#include <vector>
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
#include <vector>
#include <string>
​
std::vector<std::vector<std::string>> allTreePaths(Node* root) {
  if (root == nullptr) {
    return std::vector<std::vector<std::string>>();
  }
  
  if (root->left == nullptr && root->right == nullptr) {
    return std::vector<std::vector<std::string>> { std::vector<std::string> { root->val } };
  }
  
  std::vector<std::vector<std::string>> result;
  
  for (std::vector<std::string> subPath : allTreePaths(root->left)) {
    subPath.insert(subPath.begin(), root->val);
    result.push_back(subPath);
  }
  
  for (std::vector<std::string> subPath : allTreePaths(root->right)) {
    subPath.insert(subPath.begin(), root->val);
    result.push_back(subPath);
  }
  
  return result;  
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}