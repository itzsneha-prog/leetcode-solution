/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* build(vector<int>nums,int left,int right){
        if(left>right){
            return NULL;
        }
        int mid=(left+right)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=build(nums,left,mid-1);
        root->right=build(nums,mid+1,right);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums,0,nums.size()-1);

        //IT IS NOT THE HEIGHT BALANCES TREE IT IS JUST THE  'BINARY  SEARCH TREE'
    // TreeNode* createNode(int val){
    //     TreeNode* root=new TreeNode(val);
        
    //     return root;
    // }
    // TreeNode* insert(TreeNode* root,int data){
    //     if(root==NULL){
    //         return createNode(data);
    //     }else if(root->val>data){
    //         root->left=insert(root->left,data);
    //     }else{
    //         root->right=insert(root->right,data);
    //     }
    //     return root;
    // }
    // TreeNode* sortedArrayToBST(vector<int>& nums) {
    //     int n=nums.size()/2;
    //     TreeNode* root=createNode(nums[n]);
    //     erase(nums,nums[n]);
    //     int low=0;
    //     int high=nums.size();
    //     while(low<high)
    //     for(int i=0;i<nums.size();i++){
    //         if(i!=nums.size()/2){
    //             root=insert(root,nums[i]);
    //         }
    //     }
    //     return root;
    }
};