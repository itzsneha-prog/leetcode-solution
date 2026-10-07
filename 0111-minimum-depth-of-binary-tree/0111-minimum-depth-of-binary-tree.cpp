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
    void countDepth(TreeNode* root,int &ansCount,int count){
        
        if(root==NULL){
            count--;
            return;
        }
        count++;

        if(root->left==NULL && root->right==NULL){
            ansCount=min(ansCount,count);
        }
        
        countDepth(root->left,ansCount,count);
        countDepth(root->right,ansCount,count);
    }
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int ansCount=INT_MAX;
        int count=0;
        countDepth(root,ansCount,count);
        return ansCount;
    }
};