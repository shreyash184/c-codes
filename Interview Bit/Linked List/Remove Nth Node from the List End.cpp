/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    struct ListNode * curr = A;
    struct ListNode * prev = curr;
    struct ListNode * kthNode=A;
    struct ListNode * tmp = A;
    int n = 0;
    if(B==0){
        while(tmp->next->next)tmp=tmp->next;
        tmp->next= NULL;
        return A;
    }
    while(tmp){
        tmp = tmp->next;
        n++;
    }
    if(B==1 && n==1)return NULL;
    if(B==n || n<B)return A->next;
    
    while(B--){
        kthNode = kthNode->next;
    }
    while(kthNode){
        prev = curr;
        curr = curr->next;
        kthNode = kthNode->next;
    }
    prev->next = curr->next;
    return A;
}
