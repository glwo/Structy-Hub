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
#include <queue>
#include <tuple>
​
std::vector<std::vector<std::string>> treeLevels(Node* root) {
  std::queue<std::tuple<Node*, int>> queue;
  if (root != nullptr) {
    queue.push(std::tuple { root, 0 });
  }
  
  std::vector<std::vector<std::string>> levels;
  
  while (queue.size() > 0) {
    auto [current, level] = queue.front();
    queue.pop();
​
    if (levels.size() == level) {
      levels.push_back(std::vector<std::string> { current->val });
    } else {
      levels[level].push_back(current->val);
    }
    
    if (current->left != nullptr) {
      queue.push(std::tuple { current->left, level + 1 });
    }
    
    if (current->right != nullptr) {
      queue.push(std::tuple { current->right, level + 1 });
    }
  }
  
  return levels;
}
​
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}