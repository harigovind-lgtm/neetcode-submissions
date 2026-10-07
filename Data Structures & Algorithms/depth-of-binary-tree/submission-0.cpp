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
    int depth(TreeNode* root, int d)
    {
        if(root==NULL)
        return d;
        int d1=depth(root->left,d+1);
        int d2=depth(root->right,d+1);
        return max(d1,d2);
    }
    int maxDepth(TreeNode* root) {
        return depth(root,0);
    }
};
