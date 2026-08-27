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

void preOrder(TreeNode* root,vector<int> &v1){
        if(root==NULL){
            return;
        }
        v1.push_back(root->val);
        preOrder(root->left,v1);
        preOrder(root->right,v1);
        }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        
        preOrder(root,v);

        return v;
    }
};