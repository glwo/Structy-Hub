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
Node* mergeLists(Node* head1, Node* head2) {
  // todo
  Node dummyHead(0);
  Node* tail = &dummyHead;
  Node* curr1 = head1;
  Node* curr2 = head2;
  Node* head = tail->next;
  
  while(curr1 != nullptr && curr2 != nullptr){
    if(curr1->val < curr2->val){
      tail->next = curr1;
      curr1 = curr1->next;
    } else{
      tail->next = curr2;
      curr2 = curr2->next;
    }
    tail = tail->next;
  }
  if(curr1 != nullptr){
    tail->next = curr1;
  }
  if(curr2 != nullptr){
    tail->next = curr2;
  }
  return dummyHead.next;
}
​
​
void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}