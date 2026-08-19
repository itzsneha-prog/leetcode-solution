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
        int sum=0;
        stack<int>nums1;
        stack<int>nums2;
        stack<int>answer;
        while(temp1!=NULL){
            nums1.push(temp1->val);
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            nums2.push(temp2->val);
            temp2=temp2->next;
        }
        while(nums1.size()!=0 && nums2.size()!=0){
            sum+=nums1.top()+nums2.top();
            nums1.pop();
            nums2.pop();
            if(sum>9){
                answer.push(sum%10);
                sum=sum/10;
            }else{
                answer.push(sum);
                sum=0;
            }
        }
        if(nums1.size()==0 ){
            while(nums2.size()!=0){
                if(sum!=0){
                    sum+=nums2.top();
                    if(sum>9){
                        answer.push(sum%10);
                        sum=sum/10;
                    }else{
                        answer.push(sum);
                        sum=0;
                    }
                    nums2.pop();
                }else{
                    answer.push(nums2.top());
                    nums2.pop();
                }
            }
        }
        if(nums2.size()==0 ){
            while(nums1.size()!=0){
                if(sum!=0){
                    sum+=nums1.top();
                    if(sum>9){
                        answer.push(sum%10);
                        sum=sum/10;
                    }else{
                        answer.push(sum);
                        sum=0;
                    }
                    nums1.pop();
                }else{
                    answer.push(nums1.top());
                    nums1.pop();
                }
            }
        }
        if(nums1.size()==0 && nums2.size()==0){
            if(sum!=0){
                answer.push(sum);
            }
        }
        ListNode* ans=new ListNode(answer.top());
        answer.pop();
        ListNode* temp=ans;
        while(answer.size()!=0){
            temp->next=new ListNode(answer.top());
            answer.pop();
            temp=temp->next;
        }
        temp->next=NULL;
        return ans;
    }
};