{
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
struct Node* addTwoLists(struct Node* first, struct Node* second);
void push(struct Node** head_ref, int new_data) {
    struct Node* new_Node = new Node(new_data);
    new_Node->next = (*head_ref);
    (*head_ref) = new_Node;
}
void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("
");
}
void freeList(struct Node* Node) {
    struct Node* temp;
    while (Node != NULL) {
        temp = Node;
        Node = Node->next;
        free(temp);
    }
}
int main(void) {
    int t, n, m, i, x;
    cin >> t;
    while (t--) {
        struct Node* res = NULL;
        struct Node* first = NULL;
        struct Node* second = NULL;
        cin >> n;
        for (i = 0; i < n; i++) {
            cin >> x;
            push(&first, x);
        }
        cin >> m;
        for (i = 0; i < m; i++) {
            cin >> x;
            push(&second, x);
        }
        res = addTwoLists(first, second);
        printList(res);
        if (first) freeList(first);
        if (second) freeList(second);
    }
    return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/

/*
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
void reverse(struct Node ** head){
    struct Node * fastptr = NULL, *slowptr = NULL, *temp = *head;
    while(temp){
        fastptr = temp->next;
        temp->next = slowptr;
        slowptr = temp;
        temp = fastptr;
    }
    *head = slowptr;
}
// write a function returns the resultant linked list
Node* addTwoLists(Node* first, Node* second) {
    // Code here
    struct Node *head;
    int total,carry = 0;
    while(first || second){
        int a = (first) ? first->data : 0;
        int b = (second) ? second->data : 0;
        total = a+b+carry;
        carry = total/10;
        total=total%10;
        push(&head, total);
        if(first)
            first = first->next;
        if(second)
            second=second->next;
    }
    if(carry!=0){
        push(&head, carry);
    }
    reverse(&head);
    return head;
}