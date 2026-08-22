/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prev=head;
        int count=1;
        if(head==NULL){
            return head;
        }
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        if(k==0 || k==count){
            return head;
        }else{
            int n;
            if(k>count){
                n=count-k%count;
            }else {
                n=count-k;
            }
            count=1;
            while(count!=n){
                prev=prev->next;
                count++;
            }

            temp->next=head;
            head=prev->next;
            prev->next=NULL;
        }
        return head;
    }
};