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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return symmetry(root->left, root->right);
    }
private:
    bool symmetry(TreeNode* A, TreeNode* B){
        bool res;
        if(!A && !B) return true;
        else if(!A || !B || A->val != B->val)
            return false;

        return symmetry(A->left, B->right) && symmetry(A->right, B->left);
    }
};
