// Problem Link: https://leetcode.com/problems/reverse-nodes-in-k-group/

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* cur;
         ListNode* pre=dummy;
         ListNode* nex;
        int l=0;
        ListNode* temp=head;
        while(temp){
            l++;
            temp=temp->next;
        }
        while(l>=k){
            cur=pre->next;
            nex=cur->next;
            for(int i=1;i<k;i++){
                cur->next=nex->next;
                nex->next=pre->next;
                pre->next=nex;
                nex=cur->next;
            }
            pre=cur;
            l-=k;
        }
        return dummy->next;
    }
};
