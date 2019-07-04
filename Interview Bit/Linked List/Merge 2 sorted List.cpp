/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 

ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* result = NULL;

/* Base cases */
if (A == NULL)
return(B);
else if (B == NULL)
return(A);

/* Pick either a or b, and recur */
if (A->val <= B->val)
{
result = A;
result->next = mergeTwoLists(A->next, B);
}
else
{
result = B;
result->next = mergeTwoLists(A, B->next);
}
return(result);
}
