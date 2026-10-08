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
    bool isbalanced=true;
    int dfs(TreeNode* root,int depth)
    {
        if(root==NULL)
        return depth;
        int l=dfs(root->left,depth+1);
        int r=dfs(root->right,depth+1);
        if(abs(l-r)>1)
        isbalanced=false;
        return max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        
        int depth=dfs(root,0);
        return isbalanced;
    }
};
