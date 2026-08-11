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
        vector<int>res;
        queue<TreeNode*>pq;
        pq.push(root);
        while(!pq.empty()){
            TreeNode* right=nullptr;
            int n=pq.size();
            for(int i=0;i<n;i++){
                TreeNode* node=pq.front();
                pq.pop();
                if(node){
                    right=node;
                    pq.push(node->left);
                    pq.push(node->right);
                }
            }
            if(right){
                res.push_back(right->val);
            }
        }
        return res;
    }
};
