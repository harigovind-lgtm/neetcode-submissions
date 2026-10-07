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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
        return NULL;
        else
        {
        TreeNode* result = new TreeNode(root->val);
        TreeNode* l=root->right;
        TreeNode* r=root->left;
        result->left=invertTree(l);
        result->right=invertTree(r);
        return result;
        }
    }
};
