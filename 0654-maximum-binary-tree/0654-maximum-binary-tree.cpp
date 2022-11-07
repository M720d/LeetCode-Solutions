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
    TreeNode* Recurse(vector<int>& nums, int l, int r)
    {
        if(l > r) return nullptr;
        TreeNode* root = new TreeNode;
        auto pos = max_element(nums.begin() + l, nums.begin() + r + 1);
        root->val = *pos;
        if(l <= r)
        {
            root->left = Recurse(nums, l, pos - nums.begin() -1);
            root->right = Recurse(nums, pos - nums.begin() + 1, r);
        }
        return root;
    }
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return Recurse(nums, 0, nums.size() - 1);
    }
};