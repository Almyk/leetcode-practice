/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        return helper(root);
    }

    int helper(TreeNode* root){
        if(root == NULL) return 0;
        int left = helper(root->left), right = helper(root->right);
        return 1 + (min(left, right) ? min(left, right) : max(left, right));
    }
};
