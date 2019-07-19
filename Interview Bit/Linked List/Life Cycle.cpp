/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(!A && !A->next)return NULL;
    struct ListNode * fastptr = A;
    struct ListNode * slowptr = A;
    slowptr=slowptr->next;
    fastptr = fastptr->next->next;
    while(fastptr && fastptr->next){
        if(slowptr == fastptr)break;
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
    }
    if(slowptr!=fastptr)return NULL;
    slowptr = A;
    while(slowptr!=fastptr){
        slowptr=slowptr->next;
        fastptr=fastptr->next;
    }
    return slowptr;
}
