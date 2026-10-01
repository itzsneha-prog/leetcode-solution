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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        q.push(root);
        int count=1;
        while(!q.empty()){
            int size=q.size();
            vector<int>v;

            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                v.push_back(node->val);
                
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
                
                q.pop();
            }
            if(count%2==0){
                reverse(v.begin(),v.end());
            }
            ans.push_back(v);
            count++;

        }
        
        return ans;
    }
};