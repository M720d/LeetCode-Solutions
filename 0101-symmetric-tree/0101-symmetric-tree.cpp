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
    
    bool check(TreeNode* p, TreeNode* q){
        
        if(p==NULL || q==NULL)
            return p==q;
        
        return check(p->left, q->right) && check(p->right, q->left) && (p->val == q->val);
    }
    
    bool isSymmetric(TreeNode* root) {
        
        return check(root, root);
    }
};