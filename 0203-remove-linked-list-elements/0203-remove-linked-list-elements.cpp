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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return head;
        }
        
        ListNode* prev=head;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val==val && temp==head){
                prev=head->next;
                head=prev;
                delete temp;
                temp=prev;
                continue;
            }

            if(temp->val==val){
                    prev->next=temp->next;
                    delete temp;
                    temp=prev->next;
                    continue;
            }

            if(prev==temp){
                temp=temp->next;
            }else{
                prev=prev->next;
                temp=prev->next;
            }
            
        }
        return head;
    }
};