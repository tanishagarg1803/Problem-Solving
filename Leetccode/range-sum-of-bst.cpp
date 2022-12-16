// Problem Link: https://leetcode.com/problems/range-sum-of-bst/description/

class Solution {
public:
    int sum=0;
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(!root)
            return 0;
        if(root->val>R)
            return rangeSumBST(root->left,L,R);
        if(root->val<L)
            return rangeSumBST(root->right,L,R);
        if(root->val<=R && root->val>=L)
            sum+=root->val;
        rangeSumBST(root->left,L,R);
        rangeSumBST(root->right,L,R);
        return sum;
    }
};
