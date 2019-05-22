{
#include <iostream>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
void printList(Node *head) {
    Node *node = head;
    while (node != NULL) {
      cout << node -> data << ' ';
      node = node -> next;
    }
    cout << '
';
}
Node *insertAtBegining(Node *head, int newData);
Node *insertAtEnd(Node *head, int newData);
int main() {
  int test;
  cin >> test;
  while (test--) {
    int n, ch, tmp;
    Node *head = NULL;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> tmp >> ch;
      if (ch) head = insertAtEnd(head, tmp);
      else head = insertAtBegining(head, tmp);
    }
    printList(head);
  }
  return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */
// function inserts the data in front of the list
Node *insertAtBegining(Node *head, int newData) {
   // Your code here
      struct Node * n = new Node(newData);
      n->next = head;
      head = n;
      return head;
}
// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)  {
   // Your code here
      struct Node * n = new Node(newData);
      n->next = NULL;
      struct Node * temp = head;
      if(temp == NULL){
         temp = n;
      }else{
          while(temp->next != NULL){
          temp=temp->next;
          }
          //now we have temp=>next = NULL
          temp->next=n;
          return head;
      }
      
}
