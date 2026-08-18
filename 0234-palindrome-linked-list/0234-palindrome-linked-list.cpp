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
    bool isPalindrome(ListNode* head) {
        stack<int>nums;
        int count=0;
        ListNode* temp=head;
        if(head==NULL){
            return true;
        }
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp=head;
        
        int n=count/2;
        for(int i=0;i<n;i++){
            nums.push(temp->val);
            temp=temp->next;
        }
        if(count%2!=0){
            temp=temp->next;;
        }
        while(temp!=NULL){
            
            if(nums.top()==temp->val){
                nums.pop();
                temp=temp->next;
            }else{
                return false;
            }
        }
        return true;
    }
};