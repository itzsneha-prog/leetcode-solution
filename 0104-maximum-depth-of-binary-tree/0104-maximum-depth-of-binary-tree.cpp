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
    void countNode(TreeNode* root,int* count,int* ansCount){
        if(root==NULL){
            return;
        }
        (*count)++;
        (*ansCount)=max((*ansCount),(*count));
        countNode(root->left,count,ansCount);
        countNode(root->right,count,ansCount);
        
        (*count)--;
    }
    int maxDepth(TreeNode* root) {
        int count=0;
        int ansCount=0;
        countNode(root,&count,&ansCount);
        return ansCount;
        
    }
};