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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev=head;
       
        if(head==NULL){
            return head;
        }else{
            ListNode* temp=prev->next;
            while(temp!=NULL){
                if(prev->val==temp->val){
                    prev->next=temp->next;
                    temp=prev->next;
                    continue;
                }
                prev=prev->next;
                temp=prev->next;
            }
        }
        return head;
    }
};