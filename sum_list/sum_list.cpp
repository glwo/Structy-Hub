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
​
​
​
int sumList(Node* head) {
  // todo
  int count = 0;
  while(head != nullptr){
    count += head->val;
    head = head->next;
  }
  return count;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}