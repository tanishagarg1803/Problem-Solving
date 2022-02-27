// Problem Link: https://leetcode.com/problems/reverse-linked-list/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * temp=head,*cur=head, *prev=NULL;
        while(cur!=NULL){
            temp=temp->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        return prev;
    }
};
