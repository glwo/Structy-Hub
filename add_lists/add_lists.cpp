#include <vector>
​
class Node {
  public:
    int val;
    Node *next;
​
    Node(int initialVal)
    {
      val = initialVal;
      next = nullptr;
    }
};
​
Node* addLists(Node* head1, Node* head2) {
  Node* dummyHead = new Node(0);
  Node* tail = dummyHead;
  int carry = 0;
  Node* current1 = head1;
  Node* current2 = head2;
  while (current1 != nullptr || current2 != nullptr || carry > 0) {
    int val1 = current1 == nullptr ? 0 : current1->val;
    int val2 = current2 == nullptr ? 0 : current2->val;
    int sum = val1 + val2 + carry;
    int digit = sum % 10;
    tail->next = new Node(digit);
​
    if (sum > 9) {
      carry = 1;
    } else {
      carry = 0;
    }
​
    tail = tail->next;
    if (current1 != nullptr) {
      current1 = current1->next;
    }
    if (current2 != nullptr) {
      current2 = current2->next;
    }
  }
​
  return dummyHead->next;
}
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}