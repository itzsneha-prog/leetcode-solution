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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* ans=new ListNode(0);
        ListNode* curr=ans;
        int sum=0;
        while(temp1!=NULL && temp2!=NULL){
            sum+=temp1->val+temp2->val;
            if(sum>9){
                curr->next= new ListNode(sum%10);
                curr=curr->next;
                sum=sum/10;
            }else{
                curr->next= new ListNode(sum);
                curr=curr->next;
                sum=0;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if(temp1!=NULL){
            while(temp1!=NULL){
            if(sum!=0){
                sum+=temp1->val;
                if(sum>9){
                curr->next= new ListNode(sum%10);
                curr=curr->next;
                sum=sum/10;
                }else{
                curr->next= new ListNode(sum);
                curr=curr->next;
                sum=0;
                }
            }else{
                curr->next=new ListNode(temp1->val);
                curr=curr->next;
            }
            temp1=temp1->next;
        }
        }
        if(temp2!=NULL){
            while(temp2!=NULL){
            if(sum!=0){
                sum+=temp2->val;
                if(sum>9){
                curr->next= new ListNode(sum%10);
                curr=curr->next;
                sum=sum/10;
                }else{
                curr->next= new ListNode(sum);
                curr=curr->next;
                sum=0;
                }
            }else{
                curr->next=new ListNode(temp2->val);
                curr=curr->next;
            }
            temp2=temp2->next;
            }
        }
        if(sum!=0){
            curr->next=new ListNode(sum);
            curr=curr->next;
        }
        curr->next=NULL;
        return ans->next;
    }
};