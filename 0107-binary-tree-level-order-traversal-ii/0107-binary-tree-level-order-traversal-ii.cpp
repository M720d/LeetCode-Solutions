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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
          vector<vector<int>> res;
        
        if(root==NULL)
            return res;
        
        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        
        while(!nodesQueue.empty()){
            int size = nodesQueue.size();
            vector<int> row(size);
            
            for(int i = 0;i<size;i++){
                TreeNode * node = nodesQueue.front();
                nodesQueue.pop();
                row[i] = (node->val);
                
                if(node->left)
                    nodesQueue.push(node->left);
                
                if(node->right)
                    nodesQueue.push(node->right);
                
            }
            res.push_back(row);
        }
        
        int nn = res.size();
        vector<vector<int>> ans;
       
        
        for(int i=nn-1;i>=0;i--){
             vector<int> tree;
            for(int j = 0;j<res[i].size();j++){
                tree.push_back(res[i][j]);
            }
            ans.push_back(tree);
        }
        return ans;
    }
};