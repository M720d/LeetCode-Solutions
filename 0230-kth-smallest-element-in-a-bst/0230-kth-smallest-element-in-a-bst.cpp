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
    
    void find(TreeNode* root, int k , int&c, int&ans){
        
        if(root!=NULL){
            
        find(root->left,k,c,ans);
          
        // cout << root->val;
        c++;
            // cout << c;
        if(c==k){
            // cout << c;
            // cout << root->val;
            ans = root->val;
        }
    
           
        
        
        
        find(root->right,k,c,ans);
        }
    }
        // return -1;
    
    
    int kthSmallest(TreeNode* root, int k) {
        int c = 0; int ans;
         find(root,k,c,ans);
        return ans;
    }
};