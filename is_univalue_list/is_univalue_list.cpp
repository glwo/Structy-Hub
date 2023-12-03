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
bool isUnivalueList(Node* head) {
  // todo
  int val = head->val;
  Node* curr = head;
  
  while(curr != nullptr){
     if(curr->val != val){
       return 0;
     }
    curr = curr->next;
  }
  return 1;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}