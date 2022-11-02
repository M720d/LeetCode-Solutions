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
    
//     void invert(TreeNode* p, TreeNode* q){
        
//         TreeNode* node = p;
//         p = q;
//         q = node;
        
//         invert(p->left, q->right);
//         invert(p->right, q->left);
        
//     }
    
    TreeNode* invertTree(TreeNode* root) {
        
        if(root==NULL)
            return root;
        
        invertTree(root->left);
        invertTree(root->right);
        
        TreeNode* curr = root->right;
        root->right = root->left;
        root->left = curr;
        
        
        return root;
    }
};