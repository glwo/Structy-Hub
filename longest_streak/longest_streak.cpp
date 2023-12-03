class Node {
  public:
    int val;
    Node* next;
​
    Node(int initialVal) {
      val = initialVal;
      next = nullptr;
    }
};
#include <iostream>
​
​
int longestStreak(Node* head) {
  // todo
  if(head == nullptr) return 0;
  int maxStreak = 0;
  int c = head->val;
  int count = 0;
  Node* curr = head;
  
  while(curr != nullptr){
    if(curr->val == c){
      count++;
    }
    if(count > maxStreak){
      maxStreak = std::max(count, maxStreak);
    }
    if(curr->val != c){
      count = 1;
      c = curr->val;
    }
    curr = curr->next;
  }
  
  return maxStreak;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}