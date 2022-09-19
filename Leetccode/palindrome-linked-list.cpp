// Problem Link: https://leetcode.com/problems/palindrome-linked-list/

class Solution {
public:
    ListNode * reverse(ListNode *h){
        ListNode *cur=NULL,*nex=NULL;
        while(h!=NULL){
            nex = h->next;
            h->next = cur;
            cur=h;
            h=nex;
        }
        return cur;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        ListNode *slow=head;
        ListNode * fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        ListNode* dummy=head;
        while(slow!=NULL){
            if(dummy->val!=slow->val){
                return false;
            }
            dummy=dummy->next;
            slow=slow->next;
        }
        return true;
    }
};
