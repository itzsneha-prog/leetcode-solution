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
    bool calSum(TreeNode* root,int sum,int target){
        if(root==NULL){
            return false;

        }
        
        sum+=root->val;
        if(root->left==NULL && root->right==NULL){
            return target==sum;
        }
        return calSum(root->left,sum,target) ||
                calSum(root->right,sum,target);
        

    }
    bool hasPathSum(TreeNode* root, int targetSum) {

        return calSum(root,0,targetSum);


    }
};