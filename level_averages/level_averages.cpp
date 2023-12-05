
#include <vector>
​
class Node {
  public:
    float val;
    Node* left;
    Node* right;
​
​
    Node(float initialVal) {
      val = initialVal;
      left = nullptr;
      right = nullptr;
    }
};
​
​
​
#include <vector>
​
void fillLevels(Node* root, std::vector<std::vector<float>> &levels, int level) {
  if (root == nullptr) {
    return;
  }
  
  if (level == levels.size()) {
    levels.push_back(std::vector<float> { root->val });
  } else {
    levels[level].push_back(root->val);
  }
  
  fillLevels(root->left, levels, level + 1);
  fillLevels(root->right, levels, level + 1);
}