// Problem Link:https://leetcode.com/problems/rotate-list/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        ListNode *temp=head ;
        int l=1;
        while(temp->next!=NULL){
            temp=temp->next;
            l++;
        }
        temp->next=head;
        k=k%l;
        int end=l-k;
        while(end--){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};
