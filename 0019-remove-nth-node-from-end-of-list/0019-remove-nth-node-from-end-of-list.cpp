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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        ListNode* prev=head;

        if(count==n){
            head=prev->next;
            delete prev;
            return head;
        }else{
            n=count-n+1;
            count=1;
            temp=head;

            while(count!=n){
                prev=temp;
                temp=temp->next;
                count++;
            }
        }
        prev->next=temp->next;
        temp->next=NULL;
        delete temp;
        return head;
    }
};