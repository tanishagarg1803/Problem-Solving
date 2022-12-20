// Problem Link: https://leetcode.com/problems/binary-tree-maximum-path-sum/description/

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
    int dfs(TreeNode* root,int &ans){
        if(!root){
            return 0;
        }
        int lMax=dfs(root->left,ans);
        int rMax=dfs(root->right,ans);
        if(lMax<0){
            lMax=0;
        }
        if(rMax<0){
            rMax=0;
        }
        ans=max(ans,root->val+lMax+rMax);
        return root->val+max(lMax,rMax);
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        dfs(root,ans);
        return ans;
    }
};
