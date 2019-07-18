/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//ListNode* reverse(ListNode **head)
// {
//   struct ListNode *fastPtr = NULL;
//     struct ListNode *slowPtr = NULL;
//     struct ListNode *temp = *head;
    
//     while(temp != NULL){
    
//             fastPtr = temp->next; 
//             temp->next = slowPtr; 
//             slowPtr = temp; 
//             temp = fastPtr; 
            
//     }
    
//     *head = slowPtr; 
// }
ListNode* Solution::deleteDuplicates(ListNode* A) {
    map<int, int>m;
    struct ListNode * temp = A;
    while(temp){
        m[temp->val]++;
        temp = temp->next;
    }
    struct ListNode * node;
    struct ListNode * s;
    int x = 1;
    for(auto i = m.begin();i!=m.end();i++){
        //cout<<i->first<<" "<<i->second<<endl;
        if(x==1 && i->second==1){
            node = new ListNode(i->first);
            s = node;
            x=0;
        }
        else if(i->second==1){
            struct ListNode * newNode = new ListNode(i->first);
            node->next = newNode;
            node = newNode;
        }
    }
    //reverse(&s);
    return s;
}
