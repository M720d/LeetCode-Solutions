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
    int maxLevelSum(TreeNode* root) {
        // vector<vector<int>> res;
        int maxi=INT_MIN;
        int level = 1,lvl;
        // pair<int,int> sumInd;
        
        if(root==NULL)
            return level;
        
        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        
        while(!nodesQueue.empty()){
            
            int size = nodesQueue.size();
            // vector<int> row(size);
            int sum = 0;
            
            for(int i = 0;i<size;i++){
                
                TreeNode * node = nodesQueue.front();
                nodesQueue.pop();
                
                sum += (node->val);
                
                if(node->left)
                    nodesQueue.push(node->left);
                
                if(node->right)
                    nodesQueue.push(node->right);
                
            }
                if(maxi<sum){
                    maxi = sum;
                    lvl = level;
                } 
            level++;
        }
        
        return lvl;
    }
};