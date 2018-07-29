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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty()) return NULL;
        if(nums.size() == 1) return new TreeNode(nums[0]);
        int n = nums.size() / 2;

        TreeNode* root = new TreeNode(nums[n]);
        auto v1 = vector<int>(nums.begin(), nums.begin()+n);
        auto v2 = vector<int>(nums.begin()+n+1, nums.end());
        root->left = sortedArrayToBST(v1);
        root->right = sortedArrayToBST(v2);
        return root;
    }
};
