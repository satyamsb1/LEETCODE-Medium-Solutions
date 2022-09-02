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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        if(!root) return ans;
        while(!q.empty())
        {
            vector<int>temp;
            int n= q.size();
            
            for(int i=0; i<n; i++)
            {
                TreeNode* root = q.front();
                q.pop();
                if(root->left)
                {
                    q.push(root->left);
                }
                 if(root->right)
                {
                    q.push(root->right);
                }
                temp.push_back(root->val);
            }
            
            
            ans.push_back(temp);
        }
        return ans;
    }
};
