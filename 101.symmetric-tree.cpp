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
        if((A && B) && (A->val != B->val))
            return false;
        else if(A && !B)
            return false;
        else if(!A && B)
            return false;
        else if(!A && !B) return true;

        res = symmetry(A->left, B->right);
        if(res) res = symmetry(A->right, B->left);
        return res;
    }
};
