/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode * temp = A;
    int n = 0;
    while(temp){
        temp=temp->next;
        n++;
    }
    if(B>n){
        B = B%n;
    }
    if(B==0 || n==1)return A;
    temp = A;
    struct ListNode * prev;
    for(int i = 0;i<n-B;i++){
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    struct ListNode * head = temp;
    while(temp->next){
        temp=temp->next;
    }
    temp->next = A;
    return head;
}
