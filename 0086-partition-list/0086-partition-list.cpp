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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL){
            return head;
        }
        ListNode* small=new ListNode(0);
        ListNode* large=new ListNode(0);
        ListNode* head1=small;
        ListNode* head2=large;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val<x){
                ListNode* m=new ListNode(temp->val);
                small->next=m;
                small=m;
            }else{
                ListNode* m=new ListNode(temp->val);
                large->next=m;
                large=m;
            }
            temp=temp->next;
        }
        head1=head1->next;
        head2=head2->next;
        if(head1==NULL){
            return head2;
        }
        if(head2==NULL){
            return head1;
        }
        temp=head1;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head2;
        return head1;
    }
};