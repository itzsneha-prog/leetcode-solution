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

    bool checkSymmetric(TreeNode*p,TreeNode*q){
        if(p==NULL && q==NULL){
            return true;
        }else if(q==NULL || p==NULL){
            return false;
        }else if(p->val==q->val){
            return checkSymmetric(p->left,q->right) 
            && checkSymmetric(p->right,q->left);
        }else{
            return false;
        }

    }
    bool isSymmetric(TreeNode* root) {
       return checkSymmetric(root->left,root->right);
    }
};