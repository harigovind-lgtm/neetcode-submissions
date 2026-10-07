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
    int ma=0;
    int dfs(TreeNode* root,int depth)
    {
        if(root==NULL)
        return 0;
        int l=depth;
        int r=depth;
        if(root->left)
        l=dfs(root->left,depth+1);
        if(root->right)
        r=dfs(root->right,depth+1);
        int diam=l+r-2*depth;
        ma=max(diam,ma);
        return max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        TreeNode* n=root;
        int height= dfs(root,0);
        return ma;
    }
};
