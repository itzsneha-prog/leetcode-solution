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
    bool check(TreeNode* root,long long min,long long max){
        if(root==NULL){
            return true;
        }
        if(root->val<=min || root->val>=max){
            return false;
        }

        // check(root->left);
        // if(root->left!=NULL && root->val>root->left->val){
        //     return true;
        // }
        // check(root->right);
        //     if(root->right!=NULL && root->val<root->right->val){
        //     return true;
        // }
        // if(!check(root->left) || !check(root->right)){
        //     return false;
        // }
        // return true;

        return check(root->left,min,root->val) && check(root->right,root->val,max);
    }
    bool isValidBST(TreeNode* root) {
        return check(root,LLONG_MIN,LLONG_MAX);
    }
};