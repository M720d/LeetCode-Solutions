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
    bool isValidBST(TreeNode* root) {
        long long int maxValue = LONG_MAX;
        long long int minValue = LONG_MIN;
        return isBST(root, maxValue, minValue);
    }
    
    bool isBST(TreeNode* root, long long int maxValue, long long int minValue){
        if(root==NULL)
            return true;
        
        if(root->val >= maxValue || root->val <= minValue)
            return false;
        
        bool left = isBST(root->left, root->val, minValue);
        bool right = isBST(root->right, maxValue, root->val);
        
        return (left && right);
    }
};