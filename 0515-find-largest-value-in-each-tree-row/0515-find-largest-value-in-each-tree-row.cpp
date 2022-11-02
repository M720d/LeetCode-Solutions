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
    vector<int> largestValues(TreeNode* root) {
        
         vector<int> res;
        
        if(root==NULL)
            return res;
        
        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        
        while(!nodesQueue.empty()){
            
            int size = nodesQueue.size();
            int maxi=INT_MIN;
            
            for(int i = 0;i<size;i++){
                
                TreeNode * node = nodesQueue.front();
                nodesQueue.pop();
                
                maxi = max(maxi, node->val);
                
                if(node->left)
                    nodesQueue.push(node->left);
                
                if(node->right)
                    nodesQueue.push(node->right);
            }
            res.push_back(maxi);
        }
        
        return res;
    }
};