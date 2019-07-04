/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    
    struct ListNode *s=A;
    while(s && s->next){
        if(s->val == s->next->val)
            s->next = s->next->next;
        else
            s=s->next;
    }
    return A;
}
