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
    bool isUnivalTree(TreeNode* root) {
      if(root == NULL) return true;
      return helper(root, root->val);
    }

  bool helper(TreeNode* root, int val){
    bool ret = true;
    if(root->val != val) return false;
    if(root->left){
      ret = helper(root->left, root->val);
    }
    if(root->right && ret){
      ret = helper(root->right, root->val);
    }
    return ret;
  }
};
