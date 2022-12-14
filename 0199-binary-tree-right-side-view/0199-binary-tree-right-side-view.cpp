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
    vector<int> rightSideView(TreeNode* root) {
         vector<int> res;

         if(root==NULL)
             return res;
         int ans;
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
             res.push_back(row[size-1]);
             // ans = row[0];
         }
            // int n = res.size()-1;
         // return res[n][0];
        return res;
    }
};