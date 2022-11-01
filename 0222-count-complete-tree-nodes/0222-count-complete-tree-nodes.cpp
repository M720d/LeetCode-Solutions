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
    
    int fhl(TreeNode* node){
        int ans = 0;
        
        while(node){
            ans++;
            node = node->left;
        }
        return ans;
    }
    
    int fhr(TreeNode* node){
        int ans = 0;
        
        while(node){
            ans++;
            node = node->right;
        }
        return ans;
    }
    
    int countNodes(TreeNode* root) {
        if(!root)
            return 0;
        
        int lh = fhl(root);
        int rh = fhr(root);
        
        if(lh==rh)
            return pow(2,lh)-1;
        
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};