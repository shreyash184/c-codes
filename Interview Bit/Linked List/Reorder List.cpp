/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
void reverse(struct ListNode ** head){
    struct ListNode * fast = NULL;
    struct ListNode * slow = NULL;
    struct ListNode * temp = *head;
    while(temp){
        fast = temp->next;
        temp->next = slow;
        slow = temp;
        temp = fast;
    }
    *head = slow;
}
ListNode* Solution::reorderList(ListNode* A) {
    //1) finding middle using tortise and hair method;
    struct ListNode * slow = A;
    struct ListNode * fast = A;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    struct ListNode * head1 = A;
    struct ListNode * head2 = slow->next;
    slow->next = NULL;
    ListNode * result = new ListNode(0);
    ListNode * curr = result;
    reverse(&head2);
    while(head1 || head2){
        if(head1){
            curr->next = head1;
            head1=head1->next;
            curr = curr->next;
        }
        if(head2){
            curr->next = head2;
            head2=head2->next;
            curr = curr->next;
        }
    }
    return result->next;
}
