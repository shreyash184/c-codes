/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

int count(struct ListNode *a){
    int i=0;
    while(a!=NULL){
        a=a->next;
        i++;
    }
    return i;
} 

 void reverse(struct ListNode** reverseNode){
    struct ListNode *fastPtr = NULL;
    struct ListNode *slowPtr = NULL;
    struct ListNode *temp = *reverseNode;
    
    while(temp != NULL){
    
            fastPtr = temp->next; 
            temp->next = slowPtr; 
            slowPtr = temp; 
            temp = fastPtr; 
            
    }
    
    *reverseNode = slowPtr;
 }
 
int Solution::lPalin(ListNode* A) {
    struct ListNode *reverseNode = A;
    struct ListNode *temp = A;
    int n = count(A);
    if(A == NULL || A->next == NULL){
        return 1;
        
    } else{
        n=n/2;
        int i=0;
        while(i<n){
            temp = temp->next;
            i++;
        }
        reverse(&temp);
        while(temp!=NULL){
            if(A->val == temp->val){
                A=A->next;
                temp=temp->next;
            }else{
                return 0;
            }
            
        }
        if(temp == NULL){
            return 1;
        }
    }
    return 0;
}
