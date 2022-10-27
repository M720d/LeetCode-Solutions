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
    
    int chk(TreeNode* root, int& cnt){
    if(root==NULL){return 0;}
    int l=chk(root->left, cnt);
    int r=chk(root->right, cnt);
    cnt=max(cnt, l+r);
    return 1+max(l,r);
}
    
    int diameterOfBinaryTree(TreeNode* root) {
    int cnt=0;
    chk(root, cnt);
    return cnt;
}

};
// };