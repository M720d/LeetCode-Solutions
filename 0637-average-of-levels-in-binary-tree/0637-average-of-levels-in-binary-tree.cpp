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
    vector<double> averageOfLevels(TreeNode* root) {
         vector<double> res;
         
        if(root==NULL)
            return res;
        
        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        
        while(!nodesQueue.empty()){
            int size = nodesQueue.size();
            vector<int> row(size);
            double sum = 0;
            for(int i = 0;i<size;i++){
                TreeNode * node = nodesQueue.front();
                nodesQueue.pop();
                row[i] = (node->val);
                sum+= node->val;
                
                if(node->left)
                    nodesQueue.push(node->left);
                
                if(node->right)
                    nodesQueue.push(node->right);
                
            }
             int avg = row.size();
             res.push_back(sum/avg);
        }
        
//         int nn = res.size();
//         vector<vector<int>> ans;
       
        
//         for(int i=nn-1;i>=0;i--){
//              vector<int> tree;
//             for(int j = 0;j<res[i].size();j++){
//                 tree.push_back(res[i][j]);
//             }
//             ans.push_back(tree);
//         }
        return res;
    }
};