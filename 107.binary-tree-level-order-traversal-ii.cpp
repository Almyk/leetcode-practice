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
private:
    vector<vector<int>> res;
    void helper(TreeNode* root, int depth){
        if(!root) return;
        while(res.size() <= depth)
            res.push_back(vector<int>());
        res[depth].push_back(root->val);
        helper(root->left, depth+1);
        helper(root->right, depth+1);
    }
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        helper(root, 0);
        reverse(res.begin(), res.end());
        return res;
    }
};
